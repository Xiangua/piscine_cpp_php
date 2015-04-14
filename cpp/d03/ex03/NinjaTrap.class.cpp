#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "NinjaTrap.class.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap()
{
	this->setMax_hitpoint(100);
	this->setHitpoint(100);
	this->setEnergypoint(100);
	this->setMax_energypoint(100);
	this->setLevel(1);
	this->setMelee_attack_dmg(30);
	this->setRanged_attack_dmg(20);
	this->setArmor_dmg_reduction(5);
	std::cout << "Ninja " << this->getName() << " is alive" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->setMax_hitpoint(100);
	this->setHitpoint(100);
	this->setEnergypoint(100);
	this->setMax_energypoint(100);
	this->setLevel(1);
	this->setMelee_attack_dmg(30);
	this->setRanged_attack_dmg(20);
	this->setArmor_dmg_reduction(5);
	std::cout << "Ninja " << this->getName() << " is alive" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & rf) : ClapTrap(rf)
{
	*this = rf;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Ninja " << this->getName() << " is dead" << std::endl;
}

void			NinjaTrap::EyeNinja(ClapTrap & cl)
{
	unsigned int amount = 10;
	std::cout << "Ninja " << this->getName() << " look at " << cl.getName() << " intensively, causing " <<  amount   << " points of damage !" << std::endl;
	cl.takeDamage(amount);
}
void			NinjaTrap::FingerNinja(ClapTrap & cl)
{
	unsigned int amount = 15;
	std::cout << "Ninja " << this->getName() << " attacks " << cl.getName() << " with two have his fingers, causing " <<  amount   << " points of damage !" << std::endl;
	cl.takeDamage(amount);
}
void			NinjaTrap::RightHandNinja(ClapTrap & cl)
{
	unsigned int amount = 20;
	std::cout << "Ninja " << this->getName() << " using his Right Hand to fire with his magic stick on " << cl.getName() << " at range, causing " <<  amount   << " points of damage and making his enemy blind!" << std::endl;
	cl.takeDamage(amount);
}
void			NinjaTrap::LeftLegNinja(ClapTrap & cl)
{
	unsigned int amount = 30;
	std::cout << "Ninja " << this->getName() << " kick " << cl.getName() << "in the balls at range, causing " <<  amount   << " points of damage !" << std::endl;
	cl.takeDamage(amount);
}
void			NinjaTrap::PoopNinja(ClapTrap & cl)
{
	unsigned int amount = 35;
	std::cout << "Ninja " << this->getName() << " throw a big smepoop " << cl.getName() << " at range, causing " <<  amount   << " points of damage !" << std::endl;
	cl.takeDamage(amount);
}

void			NinjaTrap::ninjaShoebox(ClapTrap & cl)
{
	if (this->getEnergypoint() >= 20)
	{
		this->setEnergypoint( this->getEnergypoint() - 20);
		srand(time(NULL));
		unsigned int	randomAttack = rand() % 5;
		if (randomAttack == 0)
				this->EyeNinja(cl);
		else if (randomAttack == 1)
				this->FingerNinja(cl);
		else if (randomAttack == 2)
				this->RightHandNinja(cl);
		else if (randomAttack == 3)
				this->LeftLegNinja(cl);
		else
				this->PoopNinja(cl);
	}
	else
	{
		std::cout << "Ninja " << this->getName() << " tried to random attack " << cl.getName() << " but failed like an Iphone 6 (yeah he's out of energy)" << std::endl;
	}
}

NinjaTrap &		NinjaTrap::operator=(NinjaTrap const & rf)
{
	if (this != &rf)
	{
		this->setMax_hitpoint(rf.getMax_hitpoint());
		this->setHitpoint(rf.getHitpoint());
		this->setMax_energypoint(rf.getMax_energypoint());
		this->setEnergypoint(rf.getEnergypoint());
		this->setLevel(rf.getLevel());
		this->setName(rf.getName());
		this->setMelee_attack_dmg(rf.getMelee_attack_dmg());
		this->setRanged_attack_dmg(rf.getRanged_attack_dmg());
		this->setArmor_dmg_reduction(rf.getArmor_dmg_reduction());
	}
	return *this;
}
