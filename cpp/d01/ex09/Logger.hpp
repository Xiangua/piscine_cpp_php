#ifndef						LOGGER_HPP
# define					LOGGER_HPP

# include					<iostream>
# include					<fstream>
# include					<sstream>
# include					<ctime>

class						Logger {
	public:
		Logger(char *);
		~Logger();
		void				log(std::string const &, std::string const &);
	
	private:
		void				logToConsole(std::string const &);
		void				logToFile(std::string const &);
		std::string			makeLogEntry(std::string) const;
		std::fstream		_file;
};

#endif
