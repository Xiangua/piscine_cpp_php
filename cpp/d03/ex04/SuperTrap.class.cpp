

#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "SuperTrap.class.hpp"

SuperTrap::SuperTrap(void)
{
    this->setName("Ninja");
    this->setMax_hitpoint(100);
    this->setHitpoint(100);
    this->setEnergypoint(100);
    this->setMax_energypoint(100);
    this->setLevel(1);
    this->setMelee_attack_dmg(30);
    this->setRanged_attack_dmg(20);
    this->setArmor_dmg_reduction(5);
    std::cout << "Super " << this->getName() << " is alive" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
{
    this->setName(name);
    this->setMax_hitpoint(100);
    this->setHitpoint(100);
    this->setEnergypoint(100);
    this->setMax_energypoint(100);
    this->setLevel(1);
    this->setMelee_attack_dmg(30);
    this->setRanged_attack_dmg(20);
    this->setArmor_dmg_reduction(5);
    std::cout << "Super " << this->getName() << " is alive" << std::endl;
}

// SuperTrap::SuperTrap(SuperTrap const & rf)
// {
//  *this = rf;
// }


SuperTrap::~SuperTrap()
{
    std::cout << "Super " << this->getName() << " is dead" << std::endl;
}

SuperTrap &     SuperTrap::operator=(SuperTrap const & rf)
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

void            SuperTrap::rangedAttack(std::string const & target)
{
        FragTrap::rangedAttack(target);
}

void            SuperTrap::meleeAttack(std::string const & target)
{
        NinjaTrap::meleeAttack(target);
}

int             SuperTrap::getHitpoint(void) const
{
    return (this->FragTrap::getHitpoint());
}
int             SuperTrap::getMax_hitpoint(void) const
{
    return (this->FragTrap::getMax_hitpoint());
}
int             SuperTrap::getEnergypoint(void) const
{
    return (this->NinjaTrap::getEnergypoint());
}
int             SuperTrap::getMax_energypoint(void) const
{
    return (this->NinjaTrap::getMax_energypoint());
}

int             SuperTrap::getLevel(void) const
{
    return (this->_level);
}
std::string     SuperTrap::getName(void) const
{
    return (this->_name);
}
int             SuperTrap::getMelee_attack_dmg(void) const
{
    return (this->NinjaTrap::getMelee_attack_dmg());
}
int             SuperTrap::getRanged_attack_dmg(void) const
{
    return (this->FragTrap::getRanged_attack_dmg());
}
int             SuperTrap::getArmor_dmg_reduction(void) const
{
    return (this->FragTrap::getArmor_dmg_reduction());
}

void            SuperTrap::setHitpoint(int const var)
{
    this->FragTrap::setHitpoint(var);
}
void            SuperTrap::setMax_hitpoint(int const var)
{
    this->FragTrap::setMax_hitpoint(var);
}
void            SuperTrap::setEnergypoint(int const var)
{
    this->NinjaTrap::setEnergypoint(var);
}
void            SuperTrap::setMax_energypoint(int const var)
{
    this->NinjaTrap::setMax_energypoint(var);
}
void            SuperTrap::setLevel(int const var)
{
    this->_level = var;
}
void            SuperTrap::setName(std::string const var)
{
    this->_name = var;
    this->NinjaTrap::setName(var);
    this->FragTrap::setName(var);
}
void            SuperTrap::setMelee_attack_dmg(int const var)
{
    this->NinjaTrap::setMelee_attack_dmg(var);
}
void            SuperTrap::setRanged_attack_dmg(int const var)
{
    this->FragTrap::setRanged_attack_dmg(var);
}
void            SuperTrap::setArmor_dmg_reduction(int const var)
{
    this->FragTrap::setArmor_dmg_reduction(var);
}