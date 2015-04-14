#include "Bureaucrat.hpp"

int	main() {
  Bureaucrat b("Bill", 1);
  std::cout << b;
  try {
	b += 1;
  }
  catch (std::exception & e) {
	std::cerr << e.what() << std::endl;
  }
  std::cout << b;
  try {
	b -= 150;
  }
  catch (std::exception & e) {
	std::cerr << e.what() << std::endl;
  }
  std::cout << b;
  try {
	b -= 149;
  }
  catch (std::exception & e) {
	std::cerr << e.what() << std::endl;
  }
  std::cout << b;
  return 0;
}
