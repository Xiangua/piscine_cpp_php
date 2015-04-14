#include "Human.hpp"

Human::Human(void) {
	return;
}

STRING	Human::identify(void) const {
	return this->_brain.identify();
}

Human	const &Human::getBrain(void) const {
	return *this;
}

Human::~Human(void) {
	return;
}
