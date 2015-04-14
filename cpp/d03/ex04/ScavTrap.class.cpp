
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->setMax_hitpoint(100);
	this->setHitpoint(100);
	this->setEnergypoint(50);
	this->setMax_energypoint(50);
	this->setLevel(1);
	this->setMelee_attack_dmg(20);
	this->setRanged_attack_dmg(15);
	this->setArmor_dmg_reduction(3);
	std::cout << "ScavTrap " << this->getName() << " is alive" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setMax_hitpoint(100);
	this->setHitpoint(100);
	this->setEnergypoint(50);
	this->setMax_energypoint(50);
	this->setLevel(1);
	this->setMelee_attack_dmg(20);
	this->setRanged_attack_dmg(15);
	this->setArmor_dmg_reduction(3);
	std::cout << "ScavTrap " << this->getName() << " is alive" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & rf) : ClapTrap(rf)
{
	*this = rf;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " is dead" << std::endl;
}

void			ScavTrap::EyeChallenge(std::string const & target, unsigned int amount)
{
		std::cout << "ScavTrap " << this->getName() << " look at " << target << " intensively, causing " <<  amount   << " points of damage !" << std::endl;
}
void			ScavTrap::FingerChallenge(std::string const & target, unsigned int amount)
{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target << " with two have his fingers, causing " <<  amount   << " points of damage !" << std::endl;
}
void			ScavTrap::RightHandChallenge(std::string const & target, unsigned int amount)
{
		std::cout << "ScavTrap " << this->getName() << " using his Right Hand to fire with his magic stick on " << target << " at range, causing " <<  amount   << " points of damage and making his enemy blind!" << std::endl;
}
void			ScavTrap::LeftLegChallenge(std::string const & target, unsigned int amount)
{
		std::cout << "ScavTrap " << this->getName() << " kick " << target << "in the balls at range, causing " <<  amount   << " points of damage !" << std::endl;
}
void			ScavTrap::PoopChallenge(std::string const & target, unsigned int amount)
{
		std::cout << "ScavTrap " << this->getName() << " throw a big smepoop " << target << " at range, causing " <<  amount   << " points of damage !" << std::endl;
}
//
unsigned int		ScavTrap::challengeNewcomer(std::string const & target)
{
	if (this->getEnergypoint() >= 5)
	{
		this->setEnergypoint( this->getEnergypoint() - 5);
		srand(time(NULL));
		unsigned int	nb_dmg = rand() % 35;
		unsigned int	randomAttack = rand() % 5;
		if (randomAttack == 0)
				this->EyeChallenge(target, nb_dmg);
		else if (randomAttack == 1)
				this->FingerChallenge(target, nb_dmg);
		else if (randomAttack == 2)
				this->RightHandChallenge(target, nb_dmg);
		else if (randomAttack == 3)
				this->LeftLegChallenge(target, nb_dmg);
		else
				this->PoopChallenge(target, nb_dmg);
		return (nb_dmg);
	}
	else
	{
		std::cout << "ScavTrap " << this->getName() << " tried to random attack " << target << " but failed like an Iphone 6 (yeah he's out of energy)" << std::endl;
	}
	return 0;
}

ScavTrap &		ScavTrap::operator=(ScavTrap const & rf)
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