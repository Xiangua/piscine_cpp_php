#include "Human.class.hpp"

int main() {
	std::string n1 =  "alexis";
	Human a(n1);
	a.action("melee", "pipi");
	a.action("ranged", "caca");
	a.action("intimidate", "popo");
	return 0;
}
