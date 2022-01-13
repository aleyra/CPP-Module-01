
#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie {
public:
	Zombie( void );
	Zombie( std::string name );
	~Zombie( void );

	void		announce( void );
	void		setname( std::string name );
	std::string	getname( void );

private:
	std::string	_name;

};

Zombie*	zombieHorde( int N, std::string name );
#endif
