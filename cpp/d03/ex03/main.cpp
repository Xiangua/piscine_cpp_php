#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "FragTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "NinjaTrap.class.hpp"

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

void	attack(NinjaTrap & p1, ClapTrap & p2)
{
	int rand1 = rand() % 3;

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
		p1.ninjaShoebox(p2);
}



void		fight(NinjaTrap *p1, ScavTrap *p2)
{
	bool live1 = true;
	bool live2 = true;

	while ((live1 && live2))
	{
		 attack(*p1, *p2);
		 if (p2->getHitpoint() == 0)
		 	live2 = false;
		 if (live2)
		 	attack(*p2, *p1);
		 if (p1->getHitpoint() == 0)
		 	live1 = false;
	}
	if (live1)
	{
		std::cout << "The winnner of the fight (" << p1->getName() << " - " << p2->getName() << " ) is : " << p1->getName() << std::endl;
		delete p2;
		std::cout << "but " << p1->getName() << " is kill by the system." << std::endl;
		delete p1;
	}
	else
	{
		std::cout << "The winnner of the fight (" << p1->getName() << " - " << p2->getName() << " ) is : " << p2->getName() << std::endl;
		delete p1;
		std::cout << "but " << p2->getName() << " is kill by the system." << std::endl;
		delete p2;
	}
}

void		fight(NinjaTrap *p1, FragTrap *p2)
{
	bool live1 = true;
	bool live2 = true;

	while ((live1 && live2))
	{
		 attack(*p1, *p2);
		 if (p2->getHitpoint() == 0)
		 	live2 = false;
		 if (live2)
		 	attack(*p2, *p1);
		 if (p1->getHitpoint() == 0)
		 	live1 = false;
	}
	if (live1)
	{
		std::cout << "The winnner of the fight (" << p1->getName() << " - " << p2->getName() << " ) is : " << p1->getName() << std::endl;
		delete p2;
		std::cout << "but " << p1->getName() << " is kill by the system." << std::endl;
		delete p1;
	}
	else
	{
		std::cout << "The winnner of the fight (" << p1->getName() << " - " << p2->getName() << " ) is : " << p2->getName() << std::endl;
		delete p1;
		std::cout << "but " << p2->getName() << " is kill by the system." << std::endl;
		delete p2;
	}
}

void		fight(FragTrap *p1, ScavTrap *p2)
{
	bool live1 = true;
	bool live2 = true;
	NinjaTrap *p3 = new NinjaTrap("Ninja");

	while ((live1 && live2))
	{
		 attack(*p1, *p2);
		 if (p2->getHitpoint() == 0)
		 	live2 = false;
		 if (live2)
		 	attack(*p2, *p1);
		 if (p1->getHitpoint() == 0)
		 	live1 = false;
	}
	if (live1)
	{
		std::cout << "The winnner of the fight (" << p1->getName() << " - " << p2->getName() << " ) is : " << p1->getName() << std::endl;
		delete p2;
		fight(p3, p1);
	}
	else
	{
		std::cout << "The winnner of the fight (" << p1->getName() << " - " << p2->getName() << " ) is : " << p2->getName() << std::endl;
		delete p1;
		fight(p3, p2);
	}
}

int		 main()
{
	srand(time(NULL));
	FragTrap *p1 = new FragTrap("player1");
	ScavTrap *p2 = new ScavTrap("player2");

	fight(p1,p2);
	return 0;
}
