#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Oh ! a wrong cat !" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Bye wrong cat" << std::endl;
}

WrongCat::WrongCat(WrongCat const & cpy)
{
	std::cout << "Oh ! a wrong cat !" << std::endl;
	*this = cpy;
}

WrongCat&		WrongCat::operator=(WrongCat const & src)
{
	this->_type = src._type;
	return (*this);
}

void		WrongCat::makeSound(void) const
{
	std::cout << "Meooooooowwwww" << std::endl;
}
