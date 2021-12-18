#include "ClapTrap.hpp"

#ifndef		FRAGTRAP_HPP
# define	FRAGTRAP_HPP

class	FragTrap : virtual public ClapTrap
{
	public :
		FragTrap();
		~FragTrap();
		FragTrap(FragTrap const & src);
		FragTrap(std::string name);
		FragTrap	&operator=(FragTrap const & rhs);
		void		highFivesGuys(void);
};

#endif
