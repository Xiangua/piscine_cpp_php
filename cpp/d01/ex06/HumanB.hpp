#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class		HumanB {
	private:
		Weapon	*_weapon;
		STRING	_name;

	public:
		HumanB(STRING name);
		void	attack(void) const;
		void	setWeapon(Weapon &);
		~HumanB(void);
};

#endif
