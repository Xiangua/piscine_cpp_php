#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Bureaucrat {
  public:
	Bureaucrat(Bureaucrat const &);
	Bureaucrat(std::string const, int);
	Bureaucrat & operator=(Bureaucrat const &);
	~Bureaucrat();
	Bureaucrat & operator+=(int);
	Bureaucrat & operator-=(int);

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


	std::string const & getName() const;
	int 				getGrade() const;

  private:
	Bureaucrat();
	std::string const _name;
	int _grade;
};

std::ostream & operator<<(std::ostream &, Bureaucrat const &);

#endif
