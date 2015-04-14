#include "Victim.hpp"

Victim::Victim() {
}

Victim::Victim(std::string name) : _name(name) {
  std::cout << "Some random victim called "<<_name<<" just popped !" << std::endl;
}

Victim::Victim(Victim const & v) {
  std::cout << "Some random victim called "<<_name<<" just popped !" << std::endl;
  *this = v;
}

Victim & Victim::operator=(Victim const & v) {
  v.getName();
  return *this;
}

Victim::~Victim() {
  std::cout << "Victim "<<_name<<" just died for no apparent reason !" << std::endl;
}

std::string const & Victim::getName() const {
	return _name;
}
void	Victim::getPolymorphed() const {
  std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim const & v) {
  o << "I'm "<<v.getName()<<" and i like otters !"<< std::endl;
  return o;
}
