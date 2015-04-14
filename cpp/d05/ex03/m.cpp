#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int	main() {
  srand(time(0));

  Form *f = NULL;
  Intern		intern;
  Bureaucrat	jesus("Jesus", 1);

  try {
	f = intern.makeForm("uhgi", "ukyhg");
	std::cout << f;
  }
  catch (std::exception & e) {
  	std::cerr << e.what() << std::endl;
  }
  try {
	f = intern.makeForm("presidential pardon request", "Nelson Mandella");
	std::cout << *f;
	jesus.signForm(*f);
	jesus.executeForm(*f);
	delete f;
  }
  catch (std::exception & e) {
  	std::cerr << e.what() << std::endl;
  }
  return 0;
}
