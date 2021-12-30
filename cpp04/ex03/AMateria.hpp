#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

# include "ICharacter.hpp"

class AMateria
{
	public :
		AMateria();
		virtual ~AMateria();
		AMateria(AMateria const & src);
		AMateria&				operator=(AMateria const & rhs);
		AMateria(std::string const & type);
		std::string const & 	getType() const;
		virtual AMateria* 		clone() const = 0;
		virtual void 			use(ICharacter& target);
	
	protected :
		const std::string	_type;
};

#endif
