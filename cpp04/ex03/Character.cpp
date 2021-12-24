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
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}

}

Character::Character(Character const & src)
{
	*this = src;
}

Character&		Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
	{
		if (rhs._inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = rhs._inventory[i]->clone();
		}
		else
			this->_inventory[i] = rhs._inventory[i];
	}
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
	else
		std::cout << "Existing slots : 0 1 2 3" << std::endl;
}

void			Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3)
	{
		if (this->_inventory[idx])
			this->_inventory[idx]->use(target);
	}
	else
		std::cout << "Existing slots : 0 1 2 3" << std::endl;
}
