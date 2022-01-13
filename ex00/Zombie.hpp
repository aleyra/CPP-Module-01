
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

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
#endif
