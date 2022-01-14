#ifndef KAREN_H
# define KAREN_H

# include <string>
# include <iostream>

class Karen{

public:
	void	complain( std::string level );

private:
	void	_debug( void );
	void	_info( void );
	void	_warning( void );
	void	_error( void );
};

#endif