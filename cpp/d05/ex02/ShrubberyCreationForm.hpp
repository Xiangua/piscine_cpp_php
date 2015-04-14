#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form {
  public:
	ShrubberyCreationForm(std::string const &);
	virtual ~ShrubberyCreationForm();
	virtual void execute(Bureaucrat const &) const;

	static int const basegs, basege;
	static std::string const basename;

  private:
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const &);
	std::string const _target;
};

#endif
