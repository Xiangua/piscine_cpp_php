#ifndef		ENEMY_HPP
# define	ENEMY_HPP

# include <iostream>

class Enemy
{
  private:
	int _hp;
	std::string const _type;
	Enemy();
	Enemy(Enemy const &);
	Enemy & operator=(Enemy const &);

  public:
	  Enemy(int hp, std::string const & type);
	  virtual ~Enemy();
	  std::string const & getType() const;
	  int getHP() const;
	  virtual void takeDamage(int);
};

std::ostream & operator<<(std::ostream & o, Enemy const & v);

#endif
