#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
  public:
	PlasmaRifle();
	~PlasmaRifle();
	static const std::string baseName;
	static const int baseapcost, basedamage;
	virtual void attack() const;

  protected:
	PlasmaRifle(PlasmaRifle const &);
	PlasmaRifle & operator=(PlasmaRifle const &);
};

#endif
