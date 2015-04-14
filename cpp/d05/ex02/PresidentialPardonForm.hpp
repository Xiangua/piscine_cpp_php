#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

# include "Form.hpp"
# include <fstream>

class PresidentialPardonForm : public Form {
  public:
	PresidentialPardonForm(std::string const &);
	virtual ~PresidentialPardonForm();
	virtual void execute(Bureaucrat const &) const;

	static int const basegs, basege;
	static std::string const basename;

  private:
	PresidentialPardonForm(PresidentialPardonForm const &);
	PresidentialPardonForm & operator=(PresidentialPardonForm const &);
	std::string const _target;
};

#endif
