#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"

void	attack(FragTrap & p1, ClapTrap & p2)
{
	int rand1 = rand() % 3;
	unsigned int nb_dmg;

	if (rand1 == 0)
	{
		p1.rangedAttack(p2.getName());
		p2.takeDamage(p1.getRanged_attack_dmg());
	}
	else if (rand1 == 1)
	{
		p1.meleeAttack(p2.getName());
		p2.takeDamage(p1.getMelee_attack_dmg());
	}
	else
	{
		if ((nb_dmg = p1.vaulthunter_dot_exe(p2.getName())) != 0)
			p2.takeDamage(nb_dmg);
	}
}

void	attack(ScavTrap & p1, ClapTrap & p2)
{
	int rand1 = rand() % 3;
	unsigned int nb_dmg;

	if (rand1 == 0)
	{
		p1.rangedAttack(p2.getName());
		p2.takeDamage(p1.getRanged_attack_dmg());
	}
	else if (rand1 == 1)
	{
		p1.meleeAttack(p2.getName());
		p2.takeDamage(p1.getMelee_attack_dmg());
	}
	else
	{
		if ((nb_dmg = p1.challengeNewcomer(p2.getName())) != 0)
			p2.takeDamage(nb_dmg);
	}
}

int		 main()
{
	FragTrap *p1 = new FragTrap("player1");
	ScavTrap *p2 = new ScavTrap("player2");
	bool live1 = true;
	bool live2 = true;
	srand(time(NULL));

	while ((live1 && live2))
	{
		 attack(*p1, *p2);
		 if (p2->getHitpoint() == 0)
		 {
		 	live2 = false;
		 	delete p2;
		 }
		 if (live2)
		 	attack(*p2, *p1);
		 if (p1->getHitpoint() == 0)
		 {
		 	live1 = false;
		 	delete p1;
		 }
	}
	if (live1)
	{
		std::cout << "The winnner is : " << p1->getName() << std::endl;
		delete p1;
	}
	else if (live2)
	{
		std::cout << "The winnner is : " << p2->getName() << std::endl;
		delete p2;
	}
	return 0;
}
