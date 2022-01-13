#include "Zombie.hpp"

void	randomChump( std::string name ){
	Zombie	random;

	random.setname(name);
	random.announce();
}
