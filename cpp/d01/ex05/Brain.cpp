#include "Brain.hpp"

Brain::Brain(void) {
	std::ostringstream	ss;
	ss << this;
	STRING				s(ss.str());
	_s = s;
	return;
}

STRING	Brain::identify(void) const {
	return _s;
}

Brain::~Brain() {
	return;
}
