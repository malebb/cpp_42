#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const & src) : _type(src._type)
{
	*this = src;
}

AMateria&		AMateria::operator=(AMateria const & rhs)
{
	(void)rhs;
	return (*this);
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

void			AMateria::use(ICharacter& target)
{
	std::cout << "* nothing happend to " << target.getName() << " *" << std::endl;
}

std::string const & 	AMateria::getType() const
{
	return (this->_type);
}
