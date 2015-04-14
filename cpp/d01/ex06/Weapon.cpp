#include "Weapon.hpp"

Weapon::Weapon(STRING name) : _type(name) {
	return;
}

STRING const	&Weapon::getType(void) const {
	STRING const &ref = this->_type;
	return ref;
}

void		Weapon::setType(STRING type) {
	this->_type = type;
}

Weapon::~Weapon(void) {
	return;
}
