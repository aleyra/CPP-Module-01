#include "HumanB.hpp"

HumanB::HumanB( std::string const name ){
	this->name = name;
}

HumanB::~HumanB( void ){
}

void	HumanB::attack( void ) const{
	std::cout << this->name << " attacks with their "
		<< this->weapon_type->getType() << std::endl;
}

void	HumanB::setWeapon ( Weapon &weapon_type){
	this->weapon_type = &weapon_type;
}
