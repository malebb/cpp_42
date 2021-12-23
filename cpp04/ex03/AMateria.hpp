#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

#include "ICharacter.hpp"

class AMateria
{
	public :
		AMateria();
		virtual ~AMateria();
		AMateria(AMateria const & src);
		AMateria&				operator=(AMateria const & rhs);
		AMateria(std::string const & type);
		std::string const & 	getType();
		virtual AMateria* 		clone() const = 0;
		virtual void 			use(ICharacter& target);
	
	protected :
		std::string		_type;
};

#endif
