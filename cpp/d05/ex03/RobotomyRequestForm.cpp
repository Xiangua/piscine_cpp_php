#include "RobotomyRequestForm.hpp"

int const RobotomyRequestForm::basegs = 72;
int const RobotomyRequestForm::basege = 45;
std::string const RobotomyRequestForm::basename = "RobotomyRequestForm";

RobotomyRequestForm::RobotomyRequestForm(std::string const & arg) : Form(RobotomyRequestForm::basename, RobotomyRequestForm::basegs, RobotomyRequestForm::basege), _target(arg) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

void RobotomyRequestForm::execute(Bureaucrat const & v) const {
  Form::execute(v);
  std::cout << "BZZzzzzzz KkrkrrRRRRRRrrrrrr..." << std::endl;
  if (rand() % 2)
	std::cout << _target << " has been succesfully robotomised !" << std::endl;
}
