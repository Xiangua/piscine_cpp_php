#include "SuperMutant.hpp"

int const SuperMutant::basehp = 170;
std::string const SuperMutant::basetype = "Super Mutant";

SuperMutant::SuperMutant() : Enemy(SuperMutant::basehp, SuperMutant::basetype) {
  std::cout<<"Gaaah. Me want smash heads !"<<std::endl;
}

SuperMutant::~SuperMutant() {
  std::cout<<"Aaaargh ..."<<std::endl;
}

void SuperMutant::takeDamage(int d) {
  std::cout << "*armor makes attack -3 *" << std::endl;
	this->Enemy::takeDamage(d - 3);
}
