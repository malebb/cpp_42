#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
	public :
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap&	operator=(DiamondTrap const & rhs);
		DiamondTrap::DiamondTrap(std::string name);
	
	private :
		std::string _name;
};
