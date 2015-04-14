#include "ShrubberyCreationForm.hpp"

int const ShrubberyCreationForm::basegs = 145;
int const ShrubberyCreationForm::basege = 137;
std::string const ShrubberyCreationForm::basename = "ShrubberyCreationForm";

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & arg) : Form(ShrubberyCreationForm::basename, ShrubberyCreationForm::basegs, ShrubberyCreationForm::basege), _target(arg) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

void ShrubberyCreationForm::execute(Bureaucrat const & v) const {
  Form::execute(v);
  std::fstream _file;
  _file.open(_target.c_str(), std::fstream::in | std::fstream::out | std::fstream::trunc);
  if (_file.is_open())
	_file.close();
  _file.open(_target.c_str(), std::fstream::in | std::fstream::out | std::fstream::app);
  if (_file.is_open()) {
	_file << "               ********" << std::endl;
	_file << "             ************" << std::endl;
	_file << "             ************" << std::endl;
	_file << "               ********" << std::endl;
	_file << "                  ||" << std::endl;
	_file << "                  ||" << std::endl;
	_file.close();
  }
  else
	std::cout << "cannot open " << _target << std::endl;
}
