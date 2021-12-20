#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal*			animal = new Animal();
	const Animal*			cat = new Cat();
	const Animal*			dog = new Dog();

	std::cout << "------------ Animal Test ------------" << std::endl;

	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;

	cat->makeSound();
	dog->makeSound();
	animal->makeSound();

	delete animal;
	delete cat;
	delete dog;

	std::cout << std::endl;


	std::cout << "------------ Wrong animal Test ------------" << std::endl;

	
	const WrongAnimal*	 	wrongAnimal = new WrongAnimal();
	const WrongAnimal*	 	wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << " " << std::endl;

	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCat;

	std::cout << std::endl;

	return (0);
}
