#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	_n = n;
	if (n < 0) {
		this->~ZombieHorde();
		return;
	}
	else {
		_zombieArray = new Zombie[n];
		this->setType("void");
		this->setZombieType();
		this->setRandomChamp();
	}
	return;
}

void	ZombieHorde::setType(STRING type) {
	this->_type = type;
	return;
}

void	ZombieHorde::setZombieType(void) {
	int i = 0;
	while (i < this->_n)
		_zombieArray[i++].setType(this->_type);
	return;
}

void	ZombieHorde::setRandomChamp(void) {
	static char const namePool[20][20] = {
		"Leonidasssss",
		"Imotep",
		"Cartman",
		"Mister-Crotte",
		"Kassos",
		"John",
		"Jayne",
		"Raynor",
		"Bulma",
		"Patrick",
		"Bob",
		"Elise",
		"Mister-Good",
		"Sainte-Marie",
		"Jeniffer",
		"Kerigan",
		"Will",
		"Babouliney",
		"Anakin",
		"Popey"
	};
	int j = 0;
	while (j < this->_n) {
		int i = rand();
		if (i < 0) i *= 1;
		_zombieArray[j].setName(namePool[i % 20]);
		_zombieArray[j].announce();
		j++;
	}
	return;
}

ZombieHorde::~ZombieHorde() {
	if (this->_n >= 0)
		delete [] this->_zombieArray;
	return;
}
