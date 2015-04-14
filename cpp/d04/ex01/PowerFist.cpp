#include "PowerFist.hpp"

std::string const	PowerFist::baseName = "Power Fist";
int	const			PowerFist::baseapcost = 8;
int	const			PowerFist::basedamage = 50;

PowerFist::PowerFist() : AWeapon(PowerFist::baseName, PowerFist::baseapcost, PowerFist::basedamage) {
}

PowerFist::PowerFist(PowerFist const & v) : AWeapon(PowerFist::baseName, PowerFist::baseapcost, PowerFist::basedamage) {
  *this = v;
}

PowerFist & PowerFist::operator=(PowerFist const & v) {
  v.getName();
  return *this;
}

void	PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist() {
}
