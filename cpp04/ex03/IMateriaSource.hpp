#ifndef IMateriaSource_HPP
# define IMateriaSource_HPP

# include <iostream>

# include "AMateria.hpp"

class MateriaSource;

class IMateriaSource
{
	public :
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria *) = 0;
		virtual AMateria* createMateria(std::string const * type) = 0;

	protected :
		AMateria*		_learnt_materia[4];
};

#endif
