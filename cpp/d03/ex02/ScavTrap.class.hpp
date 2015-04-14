#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap {

    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & rf);
        ~ScavTrap();


        ScavTrap &        operator=(ScavTrap const & rf);

        void            EyeChallenge(std::string const & target, unsigned int amount);
        void            FingerChallenge(std::string const & target, unsigned int amount);
        void            RightHandChallenge(std::string const & target, unsigned int amount);
        void            LeftLegChallenge(std::string const & target, unsigned int amount);
        void            PoopChallenge(std::string const & target, unsigned int amount);
        unsigned int    challengeNewcomer(std::string const & target);

};

#endif
