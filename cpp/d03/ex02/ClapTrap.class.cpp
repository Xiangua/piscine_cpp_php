#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(void) : _energypoint(100), _max_energypoint(100), _level(1), _melee_attack_dmg(30), _ranged_attack_dmg(20), _armor_dmg_reduction(5)
{
	this->_name = "Myname";
	this->_hitpoint = 100;
	this->_max_hitpoint = 100;
	std::cout << "ClapTrap " << this->_name << " is alive" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _energypoint(100), _max_energypoint(100), _level(1), _melee_attack_dmg(30), _ranged_attack_dmg(20), _armor_dmg_reduction(5)
{
	this->_name = name;
	this->_hitpoint = 100;
	this->_max_hitpoint = 100;
	std::cout << "ClapTrap " << this->_name << " is alive" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & rf)
{
	*this = rf;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
}

void			ClapTrap::rangedAttack(std::string const & target)
{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " at range, causing " <<  this->_ranged_attack_dmg   << " points of damage !" << std::endl;
}

void			ClapTrap::meleeAttack(std::string const & target)
{

		std::cout << "ClapTrap " << this->_name << " attacks " << target << " at melee, causing " <<  this->_melee_attack_dmg << " points of damage !" << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	int		amount2 = amount - this->_armor_dmg_reduction;

	if (amount2 < 0)
		amount2 = 0;
	this->setHitpoint(this->getHitpoint() - amount2);
	std::cout << "ClapTrap " << this->_name << " was attacked for " <<  amount2  << " points of damage !" << std::endl;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
		this->setEnergypoint(this->getEnergypoint() + amount);
		std::cout << "ClapTrap " << this->_name << " was repaired for " <<  amount  << " energy !" << std::endl;
}

ClapTrap &		ClapTrap::operator=(ClapTrap const & rf)
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

int				ClapTrap::getHitpoint(void) const
{
	return (this->_hitpoint);
}
int				ClapTrap::getMax_hitpoint(void) const
{
	return (this->_max_hitpoint);
}
int				ClapTrap::getEnergypoint(void) const
{
	return (this->_energypoint);
}
int				ClapTrap::getMax_energypoint(void) const
{
	return (this->_max_energypoint);
}
int				ClapTrap::getLevel(void) const
{
	return (this->_level);
}
std::string		ClapTrap::getName(void) const
{
	return (this->_name);
}
int				ClapTrap::getMelee_attack_dmg(void) const
{
	return (this->_melee_attack_dmg);
}
int				ClapTrap::getRanged_attack_dmg(void) const
{
	return (this->_ranged_attack_dmg);
}
int				ClapTrap::getArmor_dmg_reduction(void) const
{
	return (this->_armor_dmg_reduction);
}

void			ClapTrap::setHitpoint(int const var)
{
	if (var < 0)
		this->_hitpoint = 0;
	else if (var > this->getMax_hitpoint())
		this->_hitpoint = this->getMax_hitpoint();
	else
		this->_hitpoint = var;
}
void			ClapTrap::setMax_hitpoint(int const var)
{
	if (var <= 0)
		this->_hitpoint = 1;
	else
		this->_max_hitpoint = var;
	if (this->_max_hitpoint < this->_hitpoint)
		this->_hitpoint = this->_max_hitpoint;
}
void			ClapTrap::setEnergypoint(int const var)
{
	if (var < 0)
		this->_energypoint = 0;
	else if (var > this->getMax_energypoint())
		this->_energypoint = this->getMax_energypoint();
	else
		this->_energypoint = var;
}
void			ClapTrap::setMax_energypoint(int const var)
{
	if (var <= 0)
		this->_energypoint = 0;
	else
		this->_max_energypoint = var;
	if (this->_max_energypoint < this->_energypoint)
		this->_energypoint = this->_max_energypoint;
}
void			ClapTrap::setLevel(int const var)
{
	this->_level = var;
}
void			ClapTrap::setName(std::string const var)
{
	this->_name = var;
}
void			ClapTrap::setMelee_attack_dmg(int const var)
{
	this->_melee_attack_dmg = var;
}
void			ClapTrap::setRanged_attack_dmg(int const var)
{
	this->_ranged_attack_dmg = var;
}
void			ClapTrap::setArmor_dmg_reduction(int const var)
{
	this->_armor_dmg_reduction = var;
}
