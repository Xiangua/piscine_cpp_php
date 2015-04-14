#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(STRING type) : _type(type) {
	std::srand(std::time(0));
	return ;
}

Zombie	*ZombieEvent::newZombie(STRING name) {
	Zombie *tempZombie = new Zombie();
	tempZombie->setName(name);
	tempZombie->setType(this->_type);
	tempZombie->announce();
	return tempZombie;
}

Zombie	*ZombieEvent::randomChamp(void) {
	static char const namePool[20][20] = {
		"Brain",
		"Imotep",
		"charlotte",
		"Charlot",
		"Robert",
		"Elisa",
		"Berangere",
		"Sangoku",
		"Bulma",
		"Patrick",
		"Patricia",
		"Elise",
		"Jesus",
		"Marie",
		"Jeniffer",
		"Carolle",
		"William",
		"Rambo",
		"Anakin",
		"Popey"
	};
	int i = rand();
	if (i < 0) i *= 1;
	Zombie *tempZombie = new Zombie();
	tempZombie->setName(namePool[i % 20]);
	tempZombie->setType(this->_type);
	tempZombie->announce();
	return tempZombie;
}

ZombieEvent::~ZombieEvent(void) {
	return ;
}
