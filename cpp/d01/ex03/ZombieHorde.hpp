#ifndef ZOMBIEHORD_HPP
# define ZOMBIEHORD_HPP

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

class	ZombieHorde {
	private:
		Zombie	*_zombieArray;
		STRING	_type;
		int		_n;

	public:
		ZombieHorde(int);
		void	setType(STRING);
		void	setZombieType(void);
		void	setRandomChamp(void);
		~ZombieHorde();
};

# endif
