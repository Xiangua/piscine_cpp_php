#include "Human.class.hpp"

Human::Human(std::string & name) : _name(name) {
	return ;
}

Human::~Human() {
	return ;
}

void				Human::meleeAttack(std::string const & target) {
	std::cout << this->getName() << " uses melee attack " << target << std::endl;
}
void				Human::rangedAttack(std::string const & target) {
	std::cout << this->getName() << " uses ranged attack " << target << std::endl;
}
void				Human::intimidatingShout(std::string const & target) {
	std::cout << this->getName() << " uses intimidate " << target << std::endl;
}

std::string	const &	Human::getName() const {
	return _name;
}

void				Human::action(std::string const & action_name, std::string const & target) {
	static char actions[3][20] = {"melee", "ranged", "intimidate"};
	static void (Human::*ptr[3])(std::string const &) = { &Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	int i = 0;
	while (i < 3) {
		if (actions[i] == action_name) {
			(this->*ptr[i])(target);
			return ;
		}
		++i;
	}
	return ;
}
