#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon_name){
	this->name = name;
	this->weapon_type = weapon_name;
}

HumanA::~HumanA(){
}

void	HumanA::attack( void ) const{
	std::cout << this->name << " attacks with his "
		<< this->weapon_type.getType() << std::endl;
}
