#include <iostream>
#include <string>

int	main(){
	std::string	str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "\t  str's address = " << &str << std::endl;
	std::cout << "using stringPTR address = " << stringPTR << std::endl;
	std::cout << "using stringREF address = " << &stringREF << std::endl;
	std::cout << "\t  str's = " << str << std::endl;
	std::cout << "using stringPTR = " << *stringPTR << std::endl;
	std::cout << "using stringREF = " << stringREF << std::endl;
	return (0);
}
