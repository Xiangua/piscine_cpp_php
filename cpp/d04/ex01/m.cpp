#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main() {
  Character c("Ryu");
  std::cout << c;

  PlasmaRifle pr;
  PowerFist pf;
  std::cout << pf << pr;

  SuperMutant *sm = new SuperMutant();
  RadScorpion *rd = new RadScorpion();

  c.equip(&pr);
  std::cout << c;
  int i = 0;
  while (sm && i < 10) {
	++i;
	std::cout << *sm;
	c.attack(sm);
	c.recoverAP();
  }
  i = 0;
  c.equip(&pf);
  std::cout << c;
  while (rd && i < 2) {
	++i;
	std::cout << *rd << c;
	c.attack(rd);
	c.recoverAP();
  }

  return 0;
}
