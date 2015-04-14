#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap {

    public:
        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const & rf);
        virtual ~FragTrap();

        unsigned int    vaulthunter_dot_exe(std::string const & target);
        FragTrap &        operator=(FragTrap const & rf);


        void            EyeAttack(std::string const & target, unsigned int amount);
        void            FingerAttack(std::string const & target, unsigned int amount);
        void            RightHandAttack(std::string const & target, unsigned int amount);
        void            LeftLegAttack(std::string const & target, unsigned int amount);
        void            PoopAttack(std::string const & target, unsigned int amount);

};

#endif
