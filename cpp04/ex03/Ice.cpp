#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(Ice const & src)
{
	*this = src;
}

Ice&			Ice::operator=(Ice const & rhs)
{
	(void)rhs;

	return (*this);
}

void			Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
		<< std::endl;
}

AMateria*		Ice::clone() const
{
	return (new Ice());
}
