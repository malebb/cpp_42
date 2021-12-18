#include "Animal.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal*	animal = new Animal();
	const Animal* cat = new Cat();

	animal->makeSound();
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	delete animal;
	return (0);
}
