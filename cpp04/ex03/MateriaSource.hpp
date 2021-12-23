#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public :
		MateriaSource();
		virtual ~MateriaSource();
		MateriaSource(MateriaSource const & src);
		MateriaSource&		operator=(MateriaSource const & rhs);
		void				learnMateria(AMateria *materia);
		AMateria*			createMateria(std::string const * type);
};

#endif
