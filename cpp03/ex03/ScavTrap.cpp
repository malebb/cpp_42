#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "A new ScavTrap has been created !" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "Oh ! it's the ScavTrap " << name << " ! HP = " << this->_hit_points << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Bye ScavTrap " << this->_name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
} 

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

void	ScavTrap::attack(std::string const & target)
{
	if (this->_energy_points >= 2)
	{
		std::cout << "ScavTrap " << this->_name << " attack " \
			<< target << ", causing " << this->_attack_damage << " points of damage" << std::endl;
		this->_energy_points -= 2;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is out of energy" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " has entered in Gate keeper mode" << std::endl;
}
