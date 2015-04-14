#include "PlasmaRifle.hpp"

std::string const	PlasmaRifle::baseName = "Plasma Rifle";
int	const			PlasmaRifle::baseapcost = 5;
int	const			PlasmaRifle::basedamage = 21;

PlasmaRifle::PlasmaRifle() : AWeapon(PlasmaRifle::baseName, PlasmaRifle::baseapcost, PlasmaRifle::basedamage) {
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & v) : AWeapon(PlasmaRifle::baseName, PlasmaRifle::baseapcost, PlasmaRifle::basedamage) {
  *this = v;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & v) {
  v.getName();
  return *this;
}

void	PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle() {
}
