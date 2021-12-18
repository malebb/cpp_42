#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public :
		ScavTrap(std::string name);
		ScavTrap();
		~ScavTrap();
		ScavTrap(ScavTrap const & src);
		ScavTrap&	operator=(ScavTrap const & rhs);
		void			attack(std::string const & target);
		void			guardGate();
};

#endif
