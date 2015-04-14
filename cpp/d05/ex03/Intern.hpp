#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
  public:
	Intern();
	~Intern();
	Form * makeForm(std::string const &, std::string const &) const;

	class UnknownFormException : public std::exception {
	  public:   
		virtual const char * what() const throw();
		UnknownFormException();
		~UnknownFormException() throw();
		UnknownFormException(UnknownFormException const &);

	  protected:
		UnknownFormException & operator=(UnknownFormException const &);
	};


  private:
	Intern(Intern const &);
	Intern & operator=(Intern const &);
};

#endif
