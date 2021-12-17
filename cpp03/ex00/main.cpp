#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	joj("joj");

	joj.attack("joblux");
	joj.attack("joblux");
	joj.attack("joblux");
	joj.attack("joblux");
	joj.attack("joblux");
	joj.attack("joblux");

	joj.takeDamage(10);
	joj.takeDamage(10);
	joj.beRepaired(10);
	joj.takeDamage(5);

	return (0);
}
