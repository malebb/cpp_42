#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	std::cout << "------------ScavTrap Test------------" << std::endl << std::endl;

	ScavTrap		*joblux = new ScavTrap("joblux");

	std::cout << std::endl;

	joblux->attack("un type");

	joblux->guardGate();

	joblux->takeDamage(50);
	joblux->takeDamage(50);
	joblux->takeDamage(5);

	std::cout << std::endl;
	delete joblux;
	std::cout << std::endl;

	std::cout << "------------FragTrap Test------------" << std::endl << std::endl;

	FragTrap		*matheu = new FragTrap("matheu");

	std::cout << std::endl;

	matheu->attack("un type");

	matheu->highFivesGuys();

	matheu->takeDamage(50);
	matheu->takeDamage(50);
	matheu->takeDamage(5);


	std::cout << std::endl;
	delete matheu;
	std::cout << std::endl;

	return (0);
}
