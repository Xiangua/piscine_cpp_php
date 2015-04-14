#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim {
  public:
	Victim(std::string);
	virtual ~Victim();

	std::string const & getName() const;
	virtual void getPolymorphed() const;

  protected:
	std::string const _name;

	Victim();
	Victim(Victim const &);
	Victim & operator=(Victim const &);
};

std::ostream & operator<<(std::ostream &, Victim const &);

#endif
