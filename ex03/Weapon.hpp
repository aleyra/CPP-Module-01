#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon{

private:
	std::string	_name;

public:
	Weapon( void );
	Weapon( std::string name );
	~Weapon( void );
	void		setType(std::string name);
	std::string	getType( void ) const;
};

#endif
