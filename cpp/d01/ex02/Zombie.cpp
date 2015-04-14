#include "Zombie.hpp"

Zombie::Zombie(STRING name, STRING type) : _name(name), _type(type) {
	this->announce();
	return;
}

void	Zombie::announce(void) {
	COUT << "< " << this->_name << " (" << this->_type << ")> " << "Braiiiiiiinnnssss..." << ENDL;
	return;
}

Zombie::~Zombie(void) {
	return;
}
