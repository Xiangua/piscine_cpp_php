#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "FragTrap.class.hpp"

FragTrap::FragTrap(void) : _energypoint(100), _max_energypoint(100), _level(1), _melee_attack_dmg(30), _ranged_attack_dmg(20), _armor_dmg_reduction(5)
{
	this->_name = "Myname";
	this->_hitpoint = 100;
	this->_max_hitpoint = 100;
	std::cout << "FR4G-TP " << this->_name << " is alive" << std::endl;
}

FragTrap::FragTrap(std::string name) : _energypoint(100), _max_energypoint(100), _level(1), _melee_attack_dmg(30), _ranged_attack_dmg(20), _armor_dmg_reduction(5)
{
	this->_name = name;
	this->_hitpoint = 100;
	this->_max_hitpoint = 100;
	std::cout << "FR4G-TP " << this->_name << " is alive" << std::endl;
}

FragTrap::FragTrap(FragTrap const & rf)
{
	*this = rf;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->_name << " is dead" << std::endl;
}

void			FragTrap::rangedAttack(std::string const & target)
{
		std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " <<  this->_ranged_attack_dmg   << " points of damage !" << std::endl;
}

void			FragTrap::meleeAttack(std::string const & target)
{

		std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " <<  this->_melee_attack_dmg << " points of damage !" << std::endl;
}

void			FragTrap::takeDamage(unsigned int amount)
{
	int		amount2 = amount - this->_armor_dmg_reduction;

	if (amount2 < 0)
		amount2 = 0;
	this->setHitpoint(this->getHitpoint() - amount2);
	std::cout << "FR4G-TP " << this->_name << " was attacked for " <<  amount2  << " points of damage !" << std::endl;
}

void			FragTrap::beRepaired(unsigned int amount)
{
		this->setEnergypoint(this->getEnergypoint() + amount);
		std::cout << "FR4G-TP " << this->_name << " was repaired for " <<  amount  << " energy !" << std::endl;
}

//
void			FragTrap::EyeAttack(std::string const & target, unsigned int amount)
{
		std::cout << "FR4G-TP " << this->_name << " look at " << target << " intensively, causing " <<  amount   << " points of damage !" << std::endl;
}
void			FragTrap::FingerAttack(std::string const & target, unsigned int amount)
{
		std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with two have his fingers, causing " <<  amount   << " points of damage !" << std::endl;
}
void			FragTrap::RightHandAttack(std::string const & target, unsigned int amount)
{
		std::cout << "FR4G-TP " << this->_name << " using his Right Hand to fire with his magic stick on " << target << " at range, causing " <<  amount   << " points of damage and making his enemy blind!" << std::endl;
}
void			FragTrap::LeftLegAttack(std::string const & target, unsigned int amount)
{
		std::cout << "FR4G-TP " << this->_name << " kick " << target << "in the balls at range, causing " <<  amount   << " points of damage !" << std::endl;
}
void			FragTrap::PoopAttack(std::string const & target, unsigned int amount)
{
		std::cout << "FR4G-TP " << this->_name << " throw a big smepoop " << target << " at range, causing " <<  amount   << " points of damage !" << std::endl;
}
//
unsigned int			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energypoint >= 25)
	{
		this->_energypoint -= 25;
		srand(time(NULL));
		unsigned int randomAmmount = rand() % this->_melee_attack_dmg;
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
		std::cout << "FR4G-TP " << this->_name << " tried to random attack " << target << " but failed like an Iphone 6 (yeah he's out of energy)" << std::endl;
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

int				FragTrap::getHitpoint(void) const
{
	return (this->_hitpoint);
}
int				FragTrap::getMax_hitpoint(void) const
{
	return (this->_max_hitpoint);
}
int				FragTrap::getEnergypoint(void) const
{
	return (this->_energypoint);
}
int				FragTrap::getMax_energypoint(void) const
{
	return (this->_max_energypoint);
}
int				FragTrap::getLevel(void) const
{
	return (this->_level);
}
std::string		FragTrap::getName(void) const
{
	return (this->_name);
}
int				FragTrap::getMelee_attack_dmg(void) const
{
	return (this->_melee_attack_dmg);
}
int				FragTrap::getRanged_attack_dmg(void) const
{
	return (this->_ranged_attack_dmg);
}
int				FragTrap::getArmor_dmg_reduction(void) const
{
	return (this->_armor_dmg_reduction);
}

void			FragTrap::setHitpoint(int const var)
{
	if (var < 0)
		this->_hitpoint = 0;
	else if (var > this->getMax_hitpoint())
		this->_hitpoint = this->getMax_hitpoint();
	else
		this->_hitpoint = var;
}
void			FragTrap::setMax_hitpoint(int const var)
{
	if (var <= 0)
		this->_hitpoint = 1;
	else
		this->_max_hitpoint = var;
	if (this->_max_hitpoint < this->_hitpoint)
		this->_hitpoint = this->_max_hitpoint;
}
void			FragTrap::setEnergypoint(int const var)
{
	if (var < 0)
		this->_energypoint = 0;
	else if (var > this->getMax_energypoint())
		this->_energypoint = this->getMax_energypoint();
	else
		this->_energypoint = var;
}
void			FragTrap::setMax_energypoint(int const var)
{
	if (var <= 0)
		this->_energypoint = 0;
	else
		this->_max_energypoint = var;
	if (this->_max_energypoint < this->_energypoint)
		this->_energypoint = this->_max_energypoint;
}
void			FragTrap::setLevel(int const var)
{
	this->_level = var;
}
void			FragTrap::setName(std::string const var)
{
	this->_name = var;
}
void			FragTrap::setMelee_attack_dmg(int const var)
{
	this->_melee_attack_dmg = var;
}
void			FragTrap::setRanged_attack_dmg(int const var)
{
	this->_ranged_attack_dmg = var;
}
void			FragTrap::setArmor_dmg_reduction(int const var)
{
	this->_armor_dmg_reduction = var;
}
