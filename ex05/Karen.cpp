#include "Karen.hpp"

Karen::Karen( void ){

}

Karen::~Karen( void ){

}

void	Karen::complain( std::string level ){
	std::string lvl[4] = {
		"debug",
		"info",
		"warning",
		"error"
	};
	void	(Karen::*sentence[])( void ) = {
		&Karen::_debug,
		&Karen::_info,
		&Karen::_warning,
		&Karen::_error
	};
	for (int i = 0; i < 4; i++){
		void (Karen::*reflex)(void) = sentence[i];
		if (level.compare(lvl[i]) == 0)
			(this->*reflex)();
	}
}

void	Karen::_debug( void ){
	std::cout << "I love to get extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
		<< std::endl;
}
void	Karen::_info( void ){
	std::cout << "I cannot believe adding extra bacon cost more money. "
		<< "You don’t put enough! If you did I wouldn't be asking for more!"
		<< std::endl;
}
void	Karen::_warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been "
		<< "coming for years whereas you started working here since last month."
		<< std::endl;
}
void	Karen::_error( void ){
	std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}
