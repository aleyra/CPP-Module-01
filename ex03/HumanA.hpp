#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"
# include <iostream>

class HumanA{

public:
	HumanA( std::string name, Weapon &weapon_name );
	~HumanA();

	void	attack( void ) const;

private:
	std::string	name;
	Weapon		&weapon_type;
};

#endif