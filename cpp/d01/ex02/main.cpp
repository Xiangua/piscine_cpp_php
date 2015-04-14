#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void	randomChamp(ZombieEvent& z) {
	Zombie *temporary = z.randomChamp();
	delete temporary;
	return;
}

int main() {
	ZombieEvent	tank, smoker, splitter, boomer;
	tank.setZombieType("tank");
	smoker.setZombieType("smoker");
	splitter.setZombieType("splitter");
	boomer.setZombieType("boomer");
	Zombie witch("Sainte Marie mere de dieu", "Witch");
	Zombie *t = tank.newZombie("Boul");
	Zombie *s = smoker.newZombie("Bill");
	Zombie *p = splitter.newZombie("Serge");
	Zombie *b = boomer.newZombie("Jose");

	int i = 0;
	while (i++ < 6) {
		randomChamp(splitter);
	}

	delete t;
	delete s;
	delete p;
	delete b;
	return 0;
}
