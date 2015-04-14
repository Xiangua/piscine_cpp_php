#include "Peon.hpp"

Peon::Peon() {
}

Peon::Peon(std::string name) : Victim(name) {
    std::cout << "Zog zog." << std::endl;
}


Peon::Peon(Peon const & v) {
  *this = v;
}

Peon & Peon::operator=(Peon const & v) {
  v.getName();
  return *this;
}

Peon::~Peon() {
    std::cout << "Bleaurk..." << std::endl;
}

void Peon::getPolymorphed() const {
    std::cout << _name<<" has been turned into a pink pony !" << std::endl;
}
