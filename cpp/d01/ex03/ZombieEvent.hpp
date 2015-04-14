#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <cstdlib>
# include <ctime>

class ZombieEvent {
	private:
		STRING	_type;

	public:
		ZombieEvent(STRING);
		Zombie	*newZombie(STRING);
		Zombie	*randomChamp(void);
		~ZombieEvent(void);
};

#endif
