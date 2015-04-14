#ifndef		CHARACTER_HPP
# define	CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
  private:
	std::string const _name;
	int _ap;
	AWeapon *_weapon;

	Character();
	Character(Character const &);
	Character & operator=(Character const &);

  public:
	Character(std::string const & name);
	~Character();
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const & getName() const;

	int getAp() const;
	AWeapon const * getWeapon() const;
	static const int baseap;
};

std::ostream & operator<<(std::ostream & o, Character const & v);

#endif
