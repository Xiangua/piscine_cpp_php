#include <iostream>

int	main() {
	std::string		s = "HI THIS IS BRAIN";
	std::string		*ps = &s;
	std::string		&rs = s;
	std::cout << *ps << " " << rs << std::endl;
	return 0;
}
