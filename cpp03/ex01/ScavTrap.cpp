#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Oh ! it's the ScavTrap " << name << " ! HP = " << this->_hit_points << std::endl;
}

ScavTrap::~ScavTrap()
{
	std:cout << "Bye ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
} 

ScapTrap&	operator=(ScavTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}
