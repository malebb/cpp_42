#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	joj("joj");
	ScavTrap	joblux("joblux");

	std::cout << std::endl;
	// ClapTrap outputs:

	joj.attack("le mechant la");

	joj.takeDamage(2);

	joj.beRepaired(10);

	std::cout << std::endl;
	//ScavTrap outputs

	joblux.attack("le mechant la");
	joblux.guardGate();
	joblux.takeDamage(50);
	joblux.takeDamage(50);
	joblux.takeDamage(50);

	std::cout << std::endl;

	return (0);
}
