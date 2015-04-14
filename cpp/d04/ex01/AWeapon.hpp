#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
  private:
	std::string _name;
	int _apcost, _damage;

	AWeapon();
	AWeapon(AWeapon const &);
	AWeapon & operator=(AWeapon const &);

  public:
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	std::string const & getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

std::ostream & operator<<(std::ostream & o, AWeapon const & v);
# endif
