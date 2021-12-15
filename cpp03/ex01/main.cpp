#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	joj("joj");
	ClapTrap	joblux("joblux");

	// Joj attack until he is out of energy

	joj.attack("le mechant la");
	joj.attack("le mechant la");
	joj.attack("le mechant la");
	joj.attack("le mechant la");
	joj.attack("le mechant la");
	joj.attack("le mechant la");

	// Joblux taking damage until he is out hit point

	joblux.takeDamage(2);
	joblux.takeDamage(2);
	joblux.takeDamage(2);
	joblux.takeDamage(2);
	joblux.takeDamage(2);
	joblux.takeDamage(2);
	joblux.takeDamage(2);
	joblux.takeDamage(2);

	// Joblux is repaired and can take more damage

	joblux.beRepaired(10);
	joj.attack("joj");
	joj.attack("joj");
	joblux.takeDamage(2);
	joblux.takeDamage(2);
	joblux.takeDamage(2);

	return (0);
}
