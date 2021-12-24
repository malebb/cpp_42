#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

AMateria&		AMateria::operator=(AMateria const & rhs)
{
	this->_type = rhs._type;
	return (*this);
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

void			AMateria::use(ICharacter& target)
{
	std::cout << "* nothing happend to " << target.getName() << " *" << std::endl;
}

std::string const & 	AMateria::getType()
{
	return (this->_type);
}
