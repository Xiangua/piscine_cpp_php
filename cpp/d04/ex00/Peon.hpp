#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp" 

class Peon : public Victim {
  public:
	Peon(std::string);
	~Peon();

	virtual void getPolymorphed() const;

  private:
	Peon();
	Peon(Peon const &);
	Peon & operator=(Peon const &);
};

#endif
