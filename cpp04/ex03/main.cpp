#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	std::string		materia;
	
	std::cout << "------------Test 1------------" << std::endl;
	std::cout << std::endl;

	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	materia = "ice";
	tmp = src->createMateria(&materia);
	me->equip(tmp);
	materia = "cure";
	tmp = src->createMateria(&materia);
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	
	std::cout << std::endl;
	std::cout << "------------Test 2------------" << std::endl;
	std::cout << std::endl;

	MateriaSource* s = new MateriaSource();
	MateriaSource* s2 = new MateriaSource();

	ICharacter* joj = new Character("joj");
	ICharacter* joblux = new Character("joblux");

	s->learnMateria(new Ice());
	s->learnMateria(new Ice());
	s->learnMateria(new Ice());
	s2->learnMateria(new Cure());
	s->learnMateria(new Ice());
	s->learnMateria(new Ice()); //inventory is full

	std::cout << std::endl;

	materia = "fire";
	AMateria* ice = s->createMateria(&materia);
	materia = "ice";
	ice = s->createMateria(&materia);
	joj->equip(ice);
	joj->use(0, *joblux);
	joj->use(9, *joblux);
	joj->use(1, *joblux);
	materia = "cure";
	AMateria* cure = s2->createMateria(&materia);
	joj->equip(cure);
	joj->use(1, *joblux);

	delete s;
	delete s2;
	delete joj;
	delete joblux;

	return (0);
}
