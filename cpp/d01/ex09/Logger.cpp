#include "Logger.hpp"

Logger::Logger(char * filename) {
	_file.open(filename, std::fstream::out);
}

Logger::~Logger() {
	if (_file && _file.is_open())
		_file.close();
}

void			Logger::logToConsole(std::string const & msg) {
	std::cout << this->makeLogEntry(msg) << std::endl;
}
void			Logger::logToFile(std::string const & msg) {
	if (_file && _file.is_open())
		_file << this->makeLogEntry(msg) << std::endl;
	else
		std::cerr << "can't log in file" << std::endl;
}

std::string		Logger::makeLogEntry(std::string msg) const{
	time_t t = time(0);
	struct tm * now = localtime( & t );
	std::stringstream	ss;
	ss << (now->tm_year + 1900) << '-' << (now->tm_mon + 1) << '-' <<  now->tm_mday << " " << msg;
	return ss.str();
}

void			Logger::log(std::string const & dest, std::string const & message) {
	static char action[2][20] =  {"console", "file"};
	static void (Logger::*ptr[2])(std::string const &) = {&Logger::logToConsole, &Logger::logToFile};
	int i = 0;
	while (i < 2) {
		if (dest == action[i]) {
			(this->*ptr[i])(message);
			return ;
		}
		++i;
	}
}
