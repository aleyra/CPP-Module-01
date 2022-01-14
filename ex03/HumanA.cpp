#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon_name):name(name), weapon_type(weapon_name){
	// this->name = name;
	// this->weapon_type = weapon_name;
	// std::cout << "this weapon = " << this->weapon_type << std::endl;
	// std::cout << "weapon_name = " << &weapon_name << std::endl;
}

HumanA::~HumanA(){
}

void	HumanA::attack( void ) const{
	std::string str (this->weapon_type.getType());
	std::cout << this->name << " attacks with his "
		<< str << std::endl;
}
