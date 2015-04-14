#ifndef		HUMAN_CLASS_HPP
# define	HUMAN_CLASS_HPP

# include	<iostream>

class Human {
	private:

		std::string _name;

		void meleeAttack(std::string const & target);
		void rangedAttack(std::string const & target);
		void intimidatingShout(std::string const & target);

	public:

		Human(std::string & name);
		std::string const & getName() const;
		void action(std::string const & action_name, std::string const & target);
		~Human();
};

#endif
