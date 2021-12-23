#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "New materia" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "No more materia" << std::endl;
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
	std::cout << "New materia" << std::endl;
}

void			AMateria::use(ICharacter& target)
{
	std::cout << "* nothing happend to " << target.getName() << " *" << std::endl;
}
