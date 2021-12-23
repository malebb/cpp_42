
#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "Oh ! a dog !" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Bye dog" << std::endl;
}

Dog::Dog(Dog const & cpy)
{
	std::cout << "Oh ! a dog !" << std::endl;
	*this = cpy;
}

Dog&		Dog::operator=(Dog const & src)
{
	this->_type = src._type;
	this->_brain = new Brain(*src._brain);
	return (*this);
}

void		Dog::makeSound(void) const
{
	std::cout << "Woof woof Woof" << std::endl;
}

Brain*		Dog::get_brain(void) const
{
	return (this->_brain);
}
