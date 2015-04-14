#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {
  srand(time(0));
  Bureaucrat	b("Bill", 65);
  Bureaucrat	jesus("Jesus", 1);
  ShrubberyCreationForm s("home");
  RobotomyRequestForm	r("someone");
  PresidentialPardonForm p("a prisonner");
  std::cout << b << s << r << p;

  b.executeForm(s);
  b.signForm(s);
  b.signForm(r);
  b.signForm(p);
  b.executeForm(s);
  b.executeForm(r);
  b.executeForm(p);

  jesus.executeForm(r);
  jesus.signForm(p);
  jesus.executeForm(p);

  return 0;
}
