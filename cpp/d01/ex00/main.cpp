#include "Pony.hpp"

void	ponyOnTheStack(int age, STRING name, STRING color) {
	COUT << "ponyOnTheStack was called" << ENDL;
	Pony stackPony(age, name, color);
	COUT << "ponyOnTheStack now return" << ENDL;
	return ;
}

Pony	*ponyOnTheHeap(int age, STRING name, STRING color) {
	COUT << "ponyOnTheHeap was called" << ENDL;
	Pony *heapPony = new Pony(age, name, color);
	COUT << "ponyOnTheHeap now return" << ENDL;
	return heapPony;
}

int main() {
	Pony *Charlotte = ponyOnTheHeap(99, "Charlotte", "Rouge");
	ponyOnTheStack(5, "Albert", "Turquoise");
	delete Charlotte;
	return 1;
}
