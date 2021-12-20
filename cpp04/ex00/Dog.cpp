
#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Oh ! a dog !" << std::endl;
}

Dog::~Dog()
{
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
	return (*this);
}

void		Dog::makeSound(void) const
{
	std::cout << "Woof woof Woof" << std::endl;
}
