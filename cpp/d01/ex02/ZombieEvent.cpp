#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent() {
	std::srand(std::time(0));
	return ;
}

void	ZombieEvent::setZombieType(STRING type) {
	this->_type = type;
	return;
}

Zombie	*ZombieEvent::newZombie(STRING name) {
	return (new Zombie(name, this->_type));
}

Zombie	*ZombieEvent::randomChamp(void) {
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
	int i = rand();
	if (i < 0) i *= 1;
	return (new Zombie(namePool[i % 20], this->_type));
}

ZombieEvent::~ZombieEvent(void) {
	return ;
}
