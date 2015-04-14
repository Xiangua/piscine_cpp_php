#include "Logger.hpp"

int			main(int ac, char **av) {
	if (ac == 1)
		std::cout << "no file Name" << std::endl; 
	Logger	l(av[1]);
	l.log("file", "Bonjour File");
	l.log("console", "Bonjour console");
	return 0;
}
