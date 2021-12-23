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
	return (*this);
}

void				MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnt_materia[i] == NULL)
			this->_learnt_materia[i] = materia;
		break;
	}
}

AMateria*		MateriaSource::createMateria(std::string const * type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_learnt_materia[i]->getType() == type)
			return (new AMateria(this->_learnt_materia[i]));
	}
	return (0);
}
