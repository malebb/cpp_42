#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "------------ClapTrap Test------------" << std::endl << std::endl;

	ClapTrap		*joj = new ClapTrap("joj");

	std::cout << std::endl;

	joj->attack("joblux");
	joj->attack("joblux");
	joj->attack("joblux");
	joj->attack("joblux");
	joj->attack("joblux");
	joj->attack("joblux");

	joj->takeDamage(10);
	joj->takeDamage(10);
	joj->beRepaired(10);
	joj->takeDamage(5);

	std::cout << std::endl;
	delete joj;
	std::cout << std::endl;
	return (0);
}
