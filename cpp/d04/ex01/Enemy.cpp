#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {
}

Enemy::~Enemy() {
}

std::string const & Enemy::getType() const {
	return _type;
}
int Enemy::getHP() const {
	return _hp;
}

void	Enemy::takeDamage(int d) {
  if (d < 0)
	return ;
  _hp -= d;
  if (d < 0)
	d = 0;
  if (_hp < 0)
	_hp = 0;
  std::cout << _type << " took " << d << " damage, he is now " << _hp << "HP" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Enemy const & v) {
	o<< v.getType() << " HP : " << v.getHP() << std::endl;
	return o;
}
