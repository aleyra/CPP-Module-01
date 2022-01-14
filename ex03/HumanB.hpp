#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"
# include <iostream>

class HumanB{

public:
	std::string	name;
	Weapon		*weapon_type;

	HumanB( std::string const name );
	~HumanB( void );

	void	attack( void ) const;
	void	setWeapon( Weapon &weapon_type);
};

#endif