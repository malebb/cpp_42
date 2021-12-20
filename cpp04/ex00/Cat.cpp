#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Oh ! a cat !" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Bye cat" << std::endl;
}

Cat::Cat(Cat const & cpy)
{
	std::cout << "Oh ! a cat !" << std::endl;
	*this = cpy;
}

Cat&		Cat::operator=(Cat const & src)
{
	this->_type = src._type;
	return (*this);
}

void		Cat::makeSound(void) const
{
	std::cout << "Meooooooowwwww" << std::endl;
}
