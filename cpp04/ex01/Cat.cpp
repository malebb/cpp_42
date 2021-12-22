#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Oh ! a cat !" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat()
{
	delete this->_brain;
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
	std::cout << "A brand new Brain" << std::endl;
	this->_brain = new Brain(*src._brain);
	return (*this);
}

void		Cat::makeSound(void) const
{
	std::cout << "Meooooooowwwww" << std::endl;
}

Brain*		Cat::get_brain(void) const
{
	return (this->_brain);
}
