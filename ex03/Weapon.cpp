#include "Weapon.hpp"
#include <iostream>//

Weapon::Weapon( void ){
}

Weapon::Weapon( std::string name ){
	this->_name = name;
}

Weapon::~Weapon(){
}

void	Weapon::setType(std::string name){
	std::cout << "[p_weapon = " << this->_name << "]" << std::endl;
	this->_name = name;
	std::cout << "[n_weapon = " << this->_name << "]" << std::endl;

}

std::string	Weapon::getType( void ) const{
	return (this->_name);
}
