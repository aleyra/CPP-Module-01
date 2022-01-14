#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"
# include <iostream>

class HumanA{

public:
	std::string	name;
	Weapon		*weapon_type;
	HumanA( std::string name, Weapon weapon_name );
	~HumanA();

	void	attack( void ) const;
	void	displayAdd( void );//
};

#endif