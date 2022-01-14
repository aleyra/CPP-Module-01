#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(){
	{
		Weapon	club = Weapon("crude spiked club");
		
		HumanA	bob("Bob", club);
		bob.displayAdd();
		bob.attack();
		club.setType("some other type of club");
		std::cout << "address club = " << &club << std::endl;//
		std::cout << "address bob's weapon = " << &(bob.weapon_type) << std::endl;//
		bob.displayAdd();
		bob.attack();
	}
	{
		Weapon	club = Weapon("crude spiked club");
		
		HumanB	jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}
