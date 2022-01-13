#include "Zombie.hpp"

Zombie::Zombie( void ){
	std::cout << "a Zombie is born" << std::endl;
}

Zombie::Zombie( std::string name ){
	this->_name = name;
	std::cout << "a Zombie called " << this->_name << " is born" << std::endl;
}

Zombie::~Zombie( void ){
	std::cout << this->_name << " is destroyed" << std::endl;
}

void	Zombie::announce( void ){
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setname( std::string name ){
	this->_name = name;
}

std::string	Zombie::getname( void ){
	return (this->_name);
}
