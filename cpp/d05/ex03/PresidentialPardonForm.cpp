#include "PresidentialPardonForm.hpp"

int const PresidentialPardonForm::basegs = 25;
int const PresidentialPardonForm::basege = 5;
std::string const PresidentialPardonForm::basename = "PresidentialPardonForm";

PresidentialPardonForm::PresidentialPardonForm(std::string const & arg) : Form(PresidentialPardonForm::basename, PresidentialPardonForm::basegs, PresidentialPardonForm::basege), _target(arg) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

void PresidentialPardonForm::execute(Bureaucrat const & v) const {
  Form::execute(v);
  std::cout << _target << " has been pardoned by " << v.getName() << " !" << std::endl;
}
