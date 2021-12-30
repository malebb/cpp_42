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

	ICharacter* joj = new Character("joj");
	ICharacter* joblux = new Character("joblux");
	AMateria*		tmp_materia;

	for (int i = 0; i < 4; i++)
	{
		if ((i % 2) == 0)
			tmp_materia = new Ice();
		else
			tmp_materia = new Cure();
		s->learnMateria(tmp_materia);
	}
	tmp_materia = new Ice();
	s->learnMateria(tmp_materia); //inventory is full
	delete tmp_materia;

	std::cout << std::endl;

	materia = "fire";
	AMateria* fire = s->createMateria(&materia);
	(void)fire;	

	std::cout << std::endl;

	materia = "ice";
	AMateria* ice = s->createMateria(&materia);

	joj->equip(ice);
	joj->use(0, *joblux);
	joj->use(9, *joblux);
	joj->use(1, *joblux);

	materia = "cure";
	AMateria* cure = s->createMateria(&materia);

	joj->equip(cure);
	joj->use(1, *joblux);
	joj->unequip(1);

	joblux->equip(cure);
	joblux->use(0, *joj);

	delete s;
	delete joj;
	delete joblux;

	return (0);
}
