#include "Zombie.hpp"

int	main(){
	Zombie *newz;

	newz = newZombie("Sakura");
	newz->announce();
	delete newz;
	randomChump("Saki");
	return (0);
}
