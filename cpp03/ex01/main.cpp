#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	joj("joj");
	ScavTrap	joblux("joblux");

	joj.attack("joblux");
	joj.attack("joblux");
	joj.attack("joblux");
	joj.attack("joblux");
	joj.attack("joblux");
	joj.attack("joblux");

	//ClapTrap outputs
	joj.takeDamage(10);
	joj.takeDamage(10);
	joj.beRepaired(10);
	joj.takeDamage(5);

	std::cout << std::endl;

	//ScavTrap outputs
	joblux.attack("un type");

	joblux.takeDamage(50);
	joblux.takeDamage(50);
	joblux.takeDamage(5);
	joblux.attack("joj");

	joblux.guardGate();

	std::cout << std::endl;

	return (0);
}
