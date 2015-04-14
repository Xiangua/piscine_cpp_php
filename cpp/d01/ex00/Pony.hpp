#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# define STRING std::string
# define COUT std::cout
# define CIN std::cin
# define ENDL std::endl

class Pony {

	private:
		int _age;
		STRING _name, _color;

	public:

		Pony(int, STRING, STRING);
   		~Pony(void);	
};

# endif
