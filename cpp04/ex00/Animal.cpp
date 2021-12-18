#include "Animal.hpp"

Animal::Animal():  _type("nothing")
{
	std::cout << "Oh ! An animal !" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Bye animal" << std::endl;
}

Animal::Animal(Animal const & cpy)
{
	*this = cpy;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Oh ! An animal !" << std::endl;
}

Animal&		Animal::operator=(Animal const & src)
{
	this->_type = src._type;
	return (*this);
}

void		Animal::makeSound(void) const
{
	std::cout << "Silence is peaceful" << std::endl;
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}
