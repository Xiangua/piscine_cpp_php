#include "RadScorpion.hpp"

int const RadScorpion::basehp = 80;
std::string const RadScorpion::basetype = "RadScorpion";

RadScorpion::RadScorpion() : Enemy(RadScorpion::basehp, RadScorpion::basetype) {
  std::cout<<"* click click click  *"<<std::endl;
}

RadScorpion::~RadScorpion() {
  std::cout<<"* SPROTCH *"<<std::endl;
}
/*
void RadScorpion::takeDamage(int d) {
	this->Enemy::takeDamage(d);
}*/
