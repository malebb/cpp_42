#include "AAnimal.hpp"

AAnimal::AAnimal():  _type("nothing")
{
	std::cout << "Oh ! An animal !" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Bye animal" << std::endl;
}

AAnimal::AAnimal(AAnimal const & cpy)
{
	std::cout << "Oh ! An animal !" << std::endl;
	*this = cpy;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "Oh ! An animal !" << std::endl;
}

AAnimal&		AAnimal::operator=(AAnimal const & src)
{
	this->_type = src._type;
	return (*this);
}

void		AAnimal::makeSound(void) const
{
	std::cout << "Silence is peaceful" << std::endl;
}

std::string		AAnimal::getType(void) const
{
	return (this->_type);
}
