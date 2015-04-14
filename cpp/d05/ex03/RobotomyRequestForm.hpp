#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

# include "Form.hpp"
# include <fstream>
# include <cstdlib>

class RobotomyRequestForm : public Form {
  public:
	RobotomyRequestForm(std::string const &);
	virtual ~RobotomyRequestForm();
	virtual void execute(Bureaucrat const &) const;

	static int const basegs, basege;
	static std::string const basename;

  private:
	RobotomyRequestForm(RobotomyRequestForm const &);
	RobotomyRequestForm & operator=(RobotomyRequestForm const &);
	std::string const _target;
};

#endif
