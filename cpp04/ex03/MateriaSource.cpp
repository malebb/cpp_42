#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_learnt_materia[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnt_materia[i] == NULL)
			break ;
		delete this->_learnt_materia[i];
	}
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
}

MateriaSource&		MateriaSource::operator=(MateriaSource const & rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (rhs._learnt_materia[i] != NULL)
		{
			delete this->_learnt_materia[i];
			this->_learnt_materia[i] = rhs._learnt_materia[i]->clone();
		}
		else
			this->_learnt_materia[i] = rhs._learnt_materia[i];
			
	}
	return (*this);
}

void				MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnt_materia[i] == NULL)
		{
			this->_learnt_materia[i] = materia;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
	delete materia;
}

AMateria*		MateriaSource::createMateria(std::string const * type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this ->_learnt_materia[i]
				&& (this->_learnt_materia[i]->getType().compare(*type)) == 0)
			return (this->_learnt_materia[i]->clone());
	}
	std::cout << "Type \"" << *type << "\" is unknown" << std::endl;
	return (0);
}
