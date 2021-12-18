#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#ifndef		DIAMONDTRAP_HPP
# define	DIAMONDTRAP_HPP

class	DiamondTrap : public ScavTrap, public FragTrap
{
	public :
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap&	operator=(DiamondTrap const & rhs);
		DiamondTrap(std::string name);
		void	attack(std::string const & target);
		void	whoAmI();

	private :
		std::string _name;
};

#endif
