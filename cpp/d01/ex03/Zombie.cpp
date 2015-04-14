#include "Zombie.hpp"

Zombie::Zombie() {
	return;
}

void	Zombie::announce(void) {
	COUT << "< " << this->_name << " (" << this->_type << ")> " << "Braiiiiiiinnnssss..." << ENDL;
	return;
}

void	Zombie::setName(STRING name) {
	this->_name = name;
	return;	
}

void	Zombie::setType(STRING type) {
	this->_type = type;
	return;	
}

Zombie::~Zombie(void) {
	COUT << _name << " died" << ENDL;
	return;
}
