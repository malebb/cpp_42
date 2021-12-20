#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():  _type("nothing")
{
	std::cout << "Oh ! A wrong animal !" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Bye wrong animal" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & cpy)
{
	std::cout << "Oh ! A wrong animal !" << std::endl;
	*this = cpy;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "Oh ! A wrong animal !" << std::endl;
}

WrongAnimal&		WrongAnimal::operator=(WrongAnimal const & src)
{
	this->_type = src._type;
	return (*this);
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "Silence is peaceful" << std::endl;
}

std::string		WrongAnimal::getType(void) const
{
	return (this->_type);
}
