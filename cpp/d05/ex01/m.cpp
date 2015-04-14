#include "Form.hpp"

int	main() {
  Bureaucrat	b("Bill", 75);
  Form			f("lvl74", 74, 74);
  Form			f2("lvl75", 75, 75);
  Form			*f3, *f4;

  std::cout << b;
  try {
	f3 = new Form("lvl151", 151, 151);
  }
  catch (std::exception & e) {
	std::cerr << e.what() << std::endl;
  }
  try {
	f4 = new Form("lvl0", 0, 0);
  }
  catch (std::exception & e) {
	std::cerr << e.what() << std::endl;
  }
  std::cout << f;
  b.signForm(f);
  std::cout << f2;
  b.signForm(f2);
  return 0;
}
