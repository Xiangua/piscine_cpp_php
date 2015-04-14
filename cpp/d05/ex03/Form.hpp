#pragma once
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
  public:
	Form(std::string const &, int, int);
	virtual ~Form();
	std::string const & getName() const;
	bool				isSigned() const;
	int					getGradeS() const;
	int					getGradeE() const;
	void				beSigned(Bureaucrat const &);
	virtual void		execute(Bureaucrat const &) const;

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
	class isNotSignedException : public std::exception {
	  public:
		virtual const char * what() const throw();
		isNotSignedException();
		~isNotSignedException() throw();
		isNotSignedException(isNotSignedException const &);

	  protected:
		isNotSignedException & operator=(isNotSignedException const &);
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
