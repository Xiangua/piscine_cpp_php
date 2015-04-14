#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException() {
}

Form::GradeTooHighException::~GradeTooHighException() throw() {
}

const char * Form::GradeTooHighException::what() const throw() {
    return "Form Grade too high";
}

Form::GradeTooLowException::GradeTooLowException() {
}

Form::GradeTooLowException::~GradeTooLowException() throw() {
}

const char * Form::GradeTooLowException::what() const throw() {
    return "Form Grade too low";
}

Form::Form(std::string const & n, int gs, int ge) : _name(n), _signed(0), _gradeS(gs), _gradeE(ge) {
  if (gs > 150 || ge > 150)
	throw Form::GradeTooLowException();
  if (gs < 1 || ge < 1)
	throw Form::GradeTooHighException();
}

Form::~Form() {
}

std::ostream & operator<<(std::ostream & o, Form const & v) {
  o << "Form " << v.getName()  << " signed : " << v.isSigned() << " grade to sign : " << v.getGradeS() << " grade to execute : " << v.getGradeE() << std::endl;
  return o;
}

std::string const & Form::getName() const {
	return _name;
}
bool				Form::isSigned() const {
	return _signed;
}
int					Form::getGradeS() const {
	return _gradeS;
}
int					Form::getGradeE() const {
	return _gradeE;
}

void				Form::beSigned(Bureaucrat const & v) {
	if (v.getGrade() > _gradeS)
	  throw Form::GradeTooHighException();
	else
	_signed = 1;
}
