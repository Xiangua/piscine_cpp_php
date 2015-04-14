#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.class.hpp"

class NinjaTrap : public virtual ClapTrap {

    public:
        NinjaTrap(void);
        NinjaTrap(std::string name);
        NinjaTrap(NinjaTrap const & rf);
        virtual ~NinjaTrap();

        void                ninjaShoebox(ClapTrap & cl);
        NinjaTrap &        operator=(NinjaTrap const & rf);


        void            EyeNinja(ClapTrap & cl);
        void            FingerNinja(ClapTrap & cl);
        void            RightHandNinja(ClapTrap & cl);
        void            LeftLegNinja(ClapTrap & cl);
        void            PoopNinja(ClapTrap & cl);

};

#endif
