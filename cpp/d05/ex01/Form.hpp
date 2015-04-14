#pragma once
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
  public:
	Form(std::string const &, int, int);
	~Form();
	std::string const & getName() const;
	bool				isSigned() const;
	int					getGradeS() const;
	int					getGradeE() const;
	void				beSigned(Bureaucrat const &);

	class GradeTooLowException : public std::exception {
	  public:
		virtual const char * what() const throw();
		GradeTooLowException();
		~GradeTooLowException() throw();
		GradeTooLowException(GradeTooLowException const &);

	  protected:
		GradeTooLowException & operator=(GradeTooLowException const &);

	};
	class GradeTooHighException : public std::exception {
	  public:
		virtual const char * what() const throw();
		GradeTooHighException();
		~GradeTooHighException() throw();
		GradeTooHighException(GradeTooLowException const &);

	  protected:
		GradeTooHighException & operator=(GradeTooHighException const &);
	};


  private:
	Form();
	Form(Form const &);
	Form & operator=(Form const &);
	std::string const _name;
	bool _signed;
	int const _gradeS, _gradeE;
};

std::ostream & operator<<(std::ostream &, Form const &);
