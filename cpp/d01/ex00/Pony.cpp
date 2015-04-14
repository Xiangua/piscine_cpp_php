#include "Pony.hpp"

Pony::Pony(int age, STRING name, STRING color) : _age(age), _name(name), _color(color) {
	COUT << "a pony is Born. His name: " << this->_name << ", his color: " << this->_age << " and " << this->_color << ENDL;
	return;
}

Pony::~Pony(void) {
	COUT << "A pony died... not fun! :( " << this->_name << ENDL;
	return;
}
