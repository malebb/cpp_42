#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{

}

DiamondTrap::DiamondTrap(std::string name)
{

}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	*this = src;
}

DiamondTrap&	operator=(DiamondTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
}

