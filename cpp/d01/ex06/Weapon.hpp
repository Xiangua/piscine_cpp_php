#ifndef WEAPON_HPP
# define WEAPON_HPP

# include	<iostream>

# define	STRING std::string
# define	COUT std::cout
# define	ENDL std::endl

class		Weapon {
	private:
		STRING	_type;

	public:
		Weapon(STRING);
		STRING const	&getType(void) const;
		void			setType(STRING);
		~Weapon(void);
};

#endif
