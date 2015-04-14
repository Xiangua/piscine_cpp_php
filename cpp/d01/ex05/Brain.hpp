#ifndef		BRAIN_HPP
# define	BRAIN_HPP

# include <iostream>
# include <sstream>

# define COUT std::cout
# define ENDL std::endl
# define STRING std::string

class	Brain {
	private:
		STRING	_s;
	public:
		Brain(void);
		STRING	identify(void) const;
		~Brain(void);
};

#endif
