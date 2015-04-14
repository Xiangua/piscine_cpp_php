#ifndef		HUMAN_HPP
# define	HUMAN_HPP

# include <iostream>
# include "Brain.hpp"

class	Human {
	private:
		Brain const		_brain;

	public:
		Human(void);
		STRING	identify(void) const;
		Human	const &getBrain(void) const;
		~Human(void);
};

#endif
