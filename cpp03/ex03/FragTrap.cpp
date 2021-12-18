#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "A new FragTrap has been created !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Bye FragTrap " << this->_name << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "Oh ! it's the FragTrap " << name << " ! HP = " << this->_hit_points << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Hi my friends! High five?" << std::endl;
}
