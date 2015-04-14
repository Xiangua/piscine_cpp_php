#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include "NinjaTrap.class.hpp"
# include "FragTrap.class.hpp"

class SuperTrap : public FragTrap ,public NinjaTrap {

    public:
        SuperTrap(void);
        SuperTrap(std::string name);
        SuperTrap(SuperTrap const & rf);
        virtual ~SuperTrap();

        SuperTrap &        operator=(SuperTrap const & rf);

        void           rangedAttack(std::string const & target);
        void           meleeAttack(std::string const & target);

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
        int                _level;
        std::string        _name;
};

#endif
