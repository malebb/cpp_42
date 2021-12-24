#include "Character.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
}

Character::~Character()
{
}

Character::Character(Character const & src)
{
	*this = src;
}

Character&		Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	return (*this);
}

Character::Character(std::string name) : _name(name)
{

}

std::string const & 	Character::getName() const
{
	return (this->_name);
}

void			Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break ;
		}
	}
}

void			Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->_inventory[idx] = NULL;
}

void			Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
		this->_inventory[idx]->use(target);
}
