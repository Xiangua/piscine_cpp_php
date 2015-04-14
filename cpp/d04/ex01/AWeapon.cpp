#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage) {
}

AWeapon::~AWeapon() {
}

std::string const & AWeapon::getName() const {
	return _name;
}

int	AWeapon::getAPCost() const {
	return _apcost;
}

int	AWeapon::getDamage() const {
	return _damage;
}

std::ostream & operator<<(std::ostream & o, AWeapon const & v) {
  o << v.getName() << " damage : " << v.getDamage() << " apcost : " << v.getAPCost() << std::endl;
  return o;
}
