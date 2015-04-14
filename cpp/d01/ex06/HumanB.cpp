#include "HumanB.hpp"

HumanB::HumanB(STRING name) : _name(name) {
	return;
}

void	HumanB::attack(void) const{
	if (_weapon)
		COUT << this->_name << " attacks with his " << this->_weapon->getType() << ENDL;
	return;
}

void	HumanB::setWeapon(Weapon &w) {
	STRING	type = w.getType();
	this->_weapon = &w;
}

HumanB::~HumanB() {
	return;
}
