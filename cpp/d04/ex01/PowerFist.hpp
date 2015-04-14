#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon {
  public:
	PowerFist();
	~PowerFist();
	static const std::string baseName;
	static const int baseapcost, basedamage;
	virtual void attack() const;

  protected:
	PowerFist(PowerFist const &);
	PowerFist & operator=(PowerFist const &);
};

#endif
