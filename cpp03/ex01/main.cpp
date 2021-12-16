#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	joj("joj");
	ScavTrap	joblux("joblux");

	// ClapTrap outputs:

	joj.attack("le mechant la");

	joj.takeDamage(2);

	joj.beRepaired(10);

	//ScavTrap outputs

	joblux.attack("le mechant la");

	joblux.takeDamage(2);

	joblux.beRepaired(10);

	return (0);
}
