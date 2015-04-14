#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & rf);
        ~ClapTrap();

        void            rangedAttack(std::string const & target);
        void            meleeAttack(std::string const & target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);
        ClapTrap &        operator=(ClapTrap const & rf);

        void            setHitpoint(int const var);
        void            setMax_hitpoint(int const var);
        void            setEnergypoint(int const var);
        void            setMax_energypoint(int const var);
        void            setLevel(int const var);
        void            setName(std::string const var);
        void            setMelee_attack_dmg(int const var);
        void            setRanged_attack_dmg(int const var);
        void            setArmor_dmg_reduction(int const var);

        int                getHitpoint(void) const ;
        int                getMax_hitpoint(void) const ;
        int                getEnergypoint(void) const ;
        int                getMax_energypoint(void) const ;
        int                getLevel(void) const ;
        std::string        getName(void) const ;
        int                getMelee_attack_dmg(void) const ;
        int                getRanged_attack_dmg(void) const ;
        int                getArmor_dmg_reduction(void) const ;

    private:
        int                _hitpoint;
        int                _max_hitpoint;
        int                _energypoint;
        int                _max_energypoint;
        int                _level;
        std::string        _name;
        int                _melee_attack_dmg;
        int                _ranged_attack_dmg;
        int                _armor_dmg_reduction;
};

#endif
