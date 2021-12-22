#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

# define NB_ANIMAL 6

int	main(void)
{
	const Animal	*animals[NB_ANIMAL];

	for (int i = 0; i < NB_ANIMAL; i++)
	{
		if ((i % 2) == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << std::endl;

	for (int i = 0; i < NB_ANIMAL; i++)
		std::cout << "Animal " << i + 1 << " is a " << animals[i]->getType()
			<< std::endl;

	std::cout << std::endl;

	for (int i = 0; i < NB_ANIMAL; i++)
		delete (animals[i]);

	std::cout << std::endl;

	const Cat *cat = new Cat();
	const Cat *cat_2 = new Cat(*cat);
	Brain			*brain;
	Brain			*brain_2;

	std::cout << std::endl;

	brain = cat->get_brain();
	brain_2 = cat_2->get_brain();
	brain->ideas[0] = "I am looking for a mouse";
	brain_2->ideas[0] = "I am looking for water";

	std::cout << "First cat's brain : " << brain << " has an ideas : "
		<< brain->ideas[0] << std::endl;
	std::cout << "Second cat's brain : " << brain_2 << " has an ideas : "
		<< brain_2->ideas[0] << std::endl;

	std::cout << std::endl;

	delete cat;
	delete cat_2;

	std::cout << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	delete j;
	delete i;

	return (0);
}
