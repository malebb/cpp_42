#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Cat		*cat = new Cat();
	const AAnimal*		animal;

	animal = cat;

	std::cout << std::endl;

	std::cout << "First animal has type " << cat->getType() << std::endl;
	cat->makeSound();
	std::cout << std::endl;

	delete cat;

	return (0);
}
