#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout<<_name<<", "<<_title<<", is born !"<<std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & v) {
  *this = v;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & v) {
  v.getName();
  return *this;
}

Sorcerer::~Sorcerer() {
	std::cout<<_name<<", "<<_title<<", is dead. Consequences will never be the same !"<<std::endl;
}

void Sorcerer::polymorph(Victim const & v) const {
	v.getPolymorphed();
}

std::string const & Sorcerer::getName() const {
  return _name;
}
std::string const & Sorcerer::getTitle() const {
  return _title;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & v) {
	o<<"I am "<<v.getName()<<", "<<v.getTitle()<<", and i like ponies !"<<std::endl;
  return o;
}
