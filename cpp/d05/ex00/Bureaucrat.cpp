#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException() {
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
  return "Grade too high";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
  return "Grade too low";
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade) {
  if (_grade > 150)
	throw GradeTooLowException();
  if (_grade < 1)
	throw GradeTooHighException();
}

Bureaucrat & Bureaucrat::operator+=(int v) {
  _grade -= v;
  if (_grade > 150) {
	_grade -= v;
	throw GradeTooLowException();
  }
  if (_grade < 1) {
	_grade += v;
	throw GradeTooHighException();
  }
  return *this;
}

Bureaucrat & Bureaucrat::operator-=(int v) {
  _grade += v;
  if (_grade > 150) {
	_grade -= v;
	throw GradeTooLowException();
  }
  if (_grade < 1) {
	_grade += v;
	throw GradeTooHighException();
  }
  return *this;
}


Bureaucrat::Bureaucrat(Bureaucrat const & v) {
  *this = v;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & v) {
  _grade = v.getGrade();
  return *this;
}

Bureaucrat::~Bureaucrat() {
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & v) {
  o << "Bureaucrat " << v.getName() << " grade : " << v.getGrade() << std::endl;
  return o;
}

std::string const & Bureaucrat::getName() const {
	return _name;
}
int					Bureaucrat::getGrade() const {
	return _grade;
}
