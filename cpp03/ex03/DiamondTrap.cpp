#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	std::cout << "A new DiamondTrap has been created !" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Bye DiamondTrap " << this->_name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << "Oh ! it's the DiamondTrap " << name << " ! HP = " << this->_hit_points << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	*this = src;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	this->_name = rhs._name;
	this->FragTrap::_hit_points = rhs.FragTrap::_hit_points;
	this->ScavTrap::_energy_points = rhs.ScavTrap::_energy_points;
	this->FragTrap::_attack_damage = rhs.FragTrap::_attack_damage;
	return (*this);
}

void			DiamondTrap::attack(std::string const & target)
{
	this->ScavTrap::attack(target);
}

void			DiamondTrap::whoAmI()
{
	std::cout << "My name is " << this->_name << " and my ClapTrap name is "
		<< this->ClapTrap::_name << std::endl;
}
