#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{

	ClapTrap	joj("joj");
	ScavTrap	joblux("joblux");
	FragTrap	matheu("matheu");

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

	matheu.attack("un type");

	matheu.takeDamage(50);
	matheu.takeDamage(50);
	matheu.takeDamage(5);
	matheu.attack("le mechant");

	matheu.highFivesGuys();

	std::cout << std::endl;

	return (0);
}
