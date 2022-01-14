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

void	Karen::filter( std::string level ){
	int	j = 0;

	std::string lvl[4] = {
		"debug",
		"info",
		"warning",
		"error"
	};

	std::string majlvl[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	void	(Karen::*sentence[])( void ) = {
		&Karen::_debug,
		&Karen::_info,
		&Karen::_warning,
		&Karen::_error
	};

	while (j < 4 && level.compare(lvl[j]) != 0 ){
		j++;
	}

	switch (j)
	{
	case 0:
		for (int i = 0; i < 4; i++){
			std::cout << "[" << majlvl[i] << "]" << std::endl;
			void (Karen::*reflex)(void) = sentence[i];
			(this->*reflex)();
		}
		break;
	case 1:
		for (int i = 1; i < 4; i++){
			std::cout << "[" << majlvl[i] << "]" << std::endl;
			void (Karen::*reflex)(void) = sentence[i];
			(this->*reflex)();
		}
		break;
	case 2:
		for (int i = 2; i < 4; i++){
			std::cout << "[" << majlvl[i] << "]" << std::endl;
			void (Karen::*reflex)(void) = sentence[i];
			(this->*reflex)();
		}
		break;
	case 3:
		for (int i = 3; i < 4; i++){
			std::cout << "[" << majlvl[i] << "]" << std::endl;
			void (Karen::*reflex)(void) = sentence[i];
			(this->*reflex)();
		}
		break;
	
	default:
		this->_other();
		break;
	}
}

void	Karen::_debug( void ){
	std::cout << "I love to get extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
		<< std::endl;
}

void	Karen::_info( void ){
	std::cout << "I cannot believe adding extra bacon cost more money. "
		<< "You don’t put enough! If you did I would not have to ask for it!"
		<< std::endl;
}

void	Karen::_warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been "
		<< "coming here for years and you just started working here last month."
		<< std::endl;
}

void	Karen::_error( void ){
	std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
}

void	Karen::_other( void ){
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
