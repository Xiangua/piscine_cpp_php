#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy {
  private:
	RadScorpion(RadScorpion const &);
	RadScorpion & operator=(RadScorpion const &);

  public:
	RadScorpion();
	~RadScorpion();
//	virtual void takeDamage(int);

	static int const basehp;
	static std::string const basetype;
};

#endif
