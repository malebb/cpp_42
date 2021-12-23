#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Brain			*brain;

	std::cout << "------------Dog test------------" <<std::endl;
	std::cout << std::endl;

	const Dog		*dog = new Dog();

	std::cout << std::endl;

	brain = dog->get_brain();
	brain->ideas[0] = "Where is my boneee??";
	std::cout << dog->getType() << " is thinking : "
		<< brain->ideas[0] << std::endl;
	dog->makeSound();

	std::cout << std::endl;

	delete dog;

	std::cout << std::endl;

	std::cout << "------------Cat test------------" <<std::endl;
	std::cout << std::endl;

	const Cat *cat = new Cat();

	std::cout << std::endl;

	brain = cat->get_brain();
	brain->ideas[0] = "Where is my mouseee??";
	std::cout << cat->getType() << " is thinking : "
		<< brain->ideas[0] << std::endl;
	cat->makeSound();

	std::cout << std::endl;

	delete dog;

//	const AAnimal animal = AAnimal(); //Error because AAnimal = abstract

	return (0);
}
