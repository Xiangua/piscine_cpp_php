#include "Intern.hpp"

Intern::UnknownFormException::UnknownFormException() {
}

Intern::UnknownFormException::~UnknownFormException() throw() {
}

const char * Intern::UnknownFormException::what() const throw() {
    return "Form doesn't exist";
}

Intern::Intern() {
}

Intern::~Intern() {
}

Form * Intern::makeForm(std::string const & name, std::string const & target) const {
  if (name == "shrubbery request") {
	ShrubberyCreationForm *c;
	try {
	  c = new ShrubberyCreationForm(target);
	  std::cout << "Intern creates " << c->getName() << std::endl;
	  return c;
	}
	catch (std::exception & e) {
	  std::cerr << e.what() << std::endl;
	}
  }
  else if (name == "robotomy request") {
	RobotomyRequestForm *c;
	try {
	  c = new RobotomyRequestForm(target);
	  std::cout << "Intern creates " << c->getName() << std::endl;
	  return c;
	}
	catch (std::exception & e) {
	  std::cerr << e.what() << std::endl;
	}
  }
  else if (name == "presidential pardon request") {
	PresidentialPardonForm *c;
	try {
	  c = new PresidentialPardonForm(target);
	  std::cout << "Intern creates " << c->getName() << std::endl;
	  return c;
	}
	catch (std::exception & e) {
	  std::cerr << e.what() << std::endl;
	}
  }
  else {
	throw Intern::UnknownFormException::UnknownFormException();
	return NULL;
  }
  return NULL;
}
