#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy {
  private:
	SuperMutant(SuperMutant const &);
	SuperMutant & operator=(SuperMutant const &);

  public:
	SuperMutant();
	~SuperMutant();
	virtual void takeDamage(int);

	static int const basehp;
	static std::string const basetype;
};

#endif
