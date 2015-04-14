#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	return;
}

void	HumanA::attack(void) const{
	COUT << this->_name << " attacks with his " << this->_weapon.getType() << ENDL;
	return;
}

HumanA::~HumanA() {
	return;
}
