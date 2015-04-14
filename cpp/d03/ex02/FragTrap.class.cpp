#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "FragTrap.class.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->setMax_hitpoint(100);
	this->setHitpoint(100);
	this->setEnergypoint(100);
	this->setMax_energypoint(100);
	this->setLevel(1);
	this->setMelee_attack_dmg(30);
	this->setRanged_attack_dmg(20);
	this->setArmor_dmg_reduction(5);
	std::cout << "FR4G-TP " << this->getName() << " is alive" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setMax_hitpoint(100);
	this->setHitpoint(100);
	this->setEnergypoint(100);
	this->setMax_energypoint(100);
	this->setLevel(1);
	this->setMelee_attack_dmg(30);
	this->setRanged_attack_dmg(20);
	this->setArmor_dmg_reduction(5);
	std::cout << "FR4G-TP " << this->getName() << " is alive" << std::endl;
}

FragTrap::FragTrap(FragTrap const & rf) : ClapTrap(rf)
{
	*this = rf;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->getName() << " is dead" << std::endl;
}

void			FragTrap::EyeAttack(std::string const & target, unsigned int amount)
{
		std::cout << "FR4G-TP " << this->getName() << " look at " << target << " intensively, causing " <<  amount   << " points of damage !" << std::endl;
}
void			FragTrap::FingerAttack(std::string const & target, unsigned int amount)
{
		std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " with two have his fingers, causing " <<  amount   << " points of damage !" << std::endl;
}
void			FragTrap::RightHandAttack(std::string const & target, unsigned int amount)
{
		std::cout << "FR4G-TP " << this->getName() << " using his Right Hand to fire with his magic stick on " << target << " at range, causing " <<  amount   << " points of damage and making his enemy blind!" << std::endl;
}
void			FragTrap::LeftLegAttack(std::string const & target, unsigned int amount)
{
		std::cout << "FR4G-TP " << this->getName() << " kick " << target << "in the balls at range, causing " <<  amount   << " points of damage !" << std::endl;
}
void			FragTrap::PoopAttack(std::string const & target, unsigned int amount)
{
		std::cout << "FR4G-TP " << this->getName() << " throw a big smepoop " << target << " at range, causing " <<  amount   << " points of damage !" << std::endl;
}
//
unsigned int			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->getEnergypoint() >= 25)
	{
		this->setEnergypoint( this->getEnergypoint() - 25);
		srand(time(NULL));
		unsigned int randomAmmount = rand() % 30;
		unsigned int	randomAttack = rand() % 5;
		if (randomAttack == 0)
				this->EyeAttack(target, randomAmmount);
		else if (randomAttack == 1)
				this->FingerAttack(target, randomAmmount);
		else if (randomAttack == 2)
				this->RightHandAttack(target, randomAmmount);
		else if (randomAttack == 3)
				this->LeftLegAttack(target, randomAmmount);
		else
				this->PoopAttack(target, randomAmmount);
		return randomAmmount;
	}
	else
	{
		std::cout << "FR4G-TP " << this->getName() << " tried to random attack " << target << " but failed like an Iphone 6 (yeah he's out of energy)" << std::endl;
	}
	return 0;
}

FragTrap &		FragTrap::operator=(FragTrap const & rf)
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
