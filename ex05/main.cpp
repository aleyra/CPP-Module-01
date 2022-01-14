#include "Karen.hpp"

int main(){
	std::string buff("waiting");
	Karen		karen;
	
	while (buff.compare("exit") != 0){
		std::cout << "\033[34mPlease chose a level "
			<< "(\033[32mdebug\033[34m, \033[32minfo\033[34m, \033[32mwarning\033[34m,"
			<< " \033[32merror\033[34m) \033[34mor enter \033[32mexit\033[34m "
			<< "to close\033[0m" << std::endl;
		std::cin >> buff;
		karen.complain(buff);
	}
	return (0);
}
