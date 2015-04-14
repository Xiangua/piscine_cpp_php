#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

# define STRING std::string
# define COUT std::cout
# define ENDL std::endl

class Zombie {
	private:
		STRING _name, _type;

	public:
		Zombie(STRING, STRING);
		void	announce(void);
		~Zombie(void);
};

#endif
