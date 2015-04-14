#include "Character.hpp"

const int Character::baseap = 40;

Character::Character(std::string const & name) : _name(name), _ap(Character::baseap), _weapon(NULL) {
}

Character::~Character() {
}

int Character::getAp() const {
	return _ap;
}

std::string const & Character::getName() const {
  return _name;
}

void	Character::recoverAP() {
	_ap += 10;
	if (_ap > Character::baseap)
	  _ap = Character::baseap;
}

void	Character::equip(AWeapon *w) {
  _weapon = w;
}

void	Character::attack(Enemy *e) {
  if (!_weapon) {
	return ;
  }
  _ap -= _weapon->getAPCost();
  if (_ap < 0) {
	_ap += _weapon->getAPCost();
	std::cout << "NOT ENOUGH AP" << std::endl;
	return ;
  }
  if (!e) {
	std::cout << "NO ENEMY" << std::endl;
	return ;
  }
  std::cout << _name << " attacks " << e->getType() << " with a " << _weapon->getName() << std::endl;
  _weapon->attack();
  e->takeDamage(_weapon->getDamage());
  if (!e->getHP()) {
		delete e;
  		e = NULL;
  }
}

AWeapon const * Character::getWeapon() const {
	return _weapon;
}

std::ostream & operator<<(std::ostream & o, Character const & v) {
	if (v.getWeapon())
	  o << v.getName() << " has " << v.getAp() << " and wields " << v.getWeapon()->getName() << std::endl;
	else
	  o << v.getName() << " has " << v.getAp() << " and is unarmed" << std::endl;
	return o;
}
