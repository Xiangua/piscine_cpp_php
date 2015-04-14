#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap(void) : _energypoint(50), _max_energypoint(50), _level(1), _melee_attack_dmg(20), _ranged_attack_dmg(15), _armor_dmg_reduction(3)
{
	this->_name = "Connard";
	this->_hitpoint = 100;
	this->_max_hitpoint = 100;
	std::cout << "ScavTrap " << this->_name << " is alive" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _energypoint(50), _max_energypoint(50), _level(1), _melee_attack_dmg(20), _ranged_attack_dmg(15), _armor_dmg_reduction(3)
{
	this->_name = name;
	this->_hitpoint = 100;
	this->_max_hitpoint = 100;
	std::cout << "ScavTrap " << this->_name << " is alive" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & rf)
{
	*this = rf;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
}

void			ScavTrap::rangedAttack(std::string const & target)
{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " at range, causing " <<  this->_ranged_attack_dmg   << " points of damage !" << std::endl;
}

void			ScavTrap::meleeAttack(std::string const & target)
{

		std::cout << "ScavTrap " << this->_name << " attacks " << target << " at melee, causing " <<  this->_melee_attack_dmg << " points of damage !" << std::endl;
}

void			ScavTrap::takeDamage(unsigned int amount)
{
	int		amount2 = amount - this->_armor_dmg_reduction;

	if (amount2 < 0)
		amount2 = 0;
	this->setHitpoint(this->getHitpoint() - amount2);
	std::cout << "ScavTrap " << this->_name << " was attacked for " <<  amount2  << " points of damage !" << std::endl;
}

void			ScavTrap::beRepaired(unsigned int amount)
{
		this->setEnergypoint(this->getEnergypoint() + amount);
		std::cout << "ScavTrap " << this->_name << " was repaired for " <<  amount  << " points of life !" << std::endl;
}

void			ScavTrap::EyeChallenge(std::string const & target, unsigned int amount)
{
		std::cout << "ScavTrap " << this->_name << " look at " << target << " intensively, causing " <<  amount   << " points of damage !" << std::endl;
}
void			ScavTrap::FingerChallenge(std::string const & target, unsigned int amount)
{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " with two have his fingers, causing " <<  amount   << " points of damage !" << std::endl;
}
void			ScavTrap::RightHandChallenge(std::string const & target, unsigned int amount)
{
		std::cout << "ScavTrap " << this->_name << " using his Right Hand to fire with his magic stick on " << target << " at range, causing " <<  amount   << " points of damage and making his enemy blind!" << std::endl;
}
void			ScavTrap::LeftLegChallenge(std::string const & target, unsigned int amount)
{
		std::cout << "ScavTrap " << this->_name << " kick " << target << "in the balls at range, causing " <<  amount   << " points of damage !" << std::endl;
}
void			ScavTrap::PoopChallenge(std::string const & target, unsigned int amount)
{
		std::cout << "ScavTrap " << this->_name << " throw a big smepoop " << target << " at range, causing " <<  amount   << " points of damage !" << std::endl;
}
//
unsigned int		ScavTrap::challengeNewcomer(std::string const & target)
{
	if (this->_energypoint >= 5)
	{
		this->_energypoint -= 5;
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
		std::cout << "ScavTrap " << this->_name << " tried to random attack " << target << " but failed like an Iphone 6 (yeah he's out of energy)" << std::endl;
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

int				ScavTrap::getHitpoint(void) const
{
	return (this->_hitpoint);
}
int				ScavTrap::getMax_hitpoint(void) const
{
	return (this->_max_hitpoint);
}
int				ScavTrap::getEnergypoint(void) const
{
	return (this->_energypoint);
}
int				ScavTrap::getMax_energypoint(void) const
{
	return (this->_max_energypoint);
}
int				ScavTrap::getLevel(void) const
{
	return (this->_level);
}
std::string		ScavTrap::getName(void) const
{
	return (this->_name);
}
int				ScavTrap::getMelee_attack_dmg(void) const
{
	return (this->_melee_attack_dmg);
}
int				ScavTrap::getRanged_attack_dmg(void) const
{
	return (this->_ranged_attack_dmg);
}
int				ScavTrap::getArmor_dmg_reduction(void) const
{
	return (this->_armor_dmg_reduction);
}

void			ScavTrap::setHitpoint(int const var)
{
	if (var < 0)
		this->_hitpoint = 0;
	else if (var > this->getMax_hitpoint())
		this->_hitpoint = this->getMax_hitpoint();
	else
		this->_hitpoint = var;
}
void			ScavTrap::setMax_hitpoint(int const var)
{
	if (var <= 0)
		this->_hitpoint = 1;
	else
		this->_max_hitpoint = var;
	if (this->_max_hitpoint < this->_hitpoint)
		this->_hitpoint = this->_max_hitpoint;
}
void			ScavTrap::setEnergypoint(int const var)
{
	if (var < 0)
		this->_energypoint = 0;
	else if (var > this->getMax_energypoint())
		this->_energypoint = this->getMax_energypoint();
	else
		this->_energypoint = var;
}
void			ScavTrap::setMax_energypoint(int const var)
{
	if (var <= 0)
		this->_energypoint = 0;
	else
		this->_max_energypoint = var;
	if (this->_max_energypoint < this->_energypoint)
		this->_energypoint = this->_max_energypoint;
}
void			ScavTrap::setLevel(int const var)
{
	this->_level = var;
}
void			ScavTrap::setName(std::string const var)
{
	this->_name = var;
}
void			ScavTrap::setMelee_attack_dmg(int const var)
{
	this->_melee_attack_dmg = var;
}
void			ScavTrap::setRanged_attack_dmg(int const var)
{
	this->_ranged_attack_dmg = var;
}
void			ScavTrap::setArmor_dmg_reduction(int const var)
{
	this->_armor_dmg_reduction = var;
}
