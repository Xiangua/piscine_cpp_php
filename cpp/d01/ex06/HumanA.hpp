#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class		HumanA {
	private:
		STRING	_name;
		Weapon	&_weapon;

	public:
		HumanA(std::string, Weapon &);
		void	attack(void) const;
		~HumanA(void);
};

#endif
