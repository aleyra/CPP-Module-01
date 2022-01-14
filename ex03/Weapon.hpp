#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon{

private:
	std::string	_name;

public:
	Weapon( void );
	Weapon( std::string const &name );
	~Weapon( void );
	void		setType(std::string const &name);
	std::string const	&getType( void ) const;
};

#endif
