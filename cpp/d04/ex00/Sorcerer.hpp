#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Peon.hpp"

class Sorcerer {
  public:
	Sorcerer(std::string, std::string);
	~Sorcerer();

	void polymorph(Victim const &) const;
	std::string const & getName() const;
	std::string const & getTitle() const;

  private:
	Sorcerer();
	Sorcerer(Sorcerer const &);
	Sorcerer & operator=(Sorcerer const &);

	std::string const _name, _title;
};

std::ostream & operator<<(std::ostream &, Sorcerer const &);

#endif
