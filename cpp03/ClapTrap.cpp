#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Oh ! it's " << name << " ! HP = " << this->_hit_points << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Bye " << this->_name << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	if (this->_energy_points >= 2)
	{
		std::cout << "ClapTrap " << this->_name << " attack " \
			<< target << ", causing " << this->_attack_damage << " points of damage" << std::endl;
		this->_energy_points -= 2;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is out of energy" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points > 0)
	{
		this->_hit_points -= amount;
		std::cout << "ClapTrap " << this->_name << " has been attacked ! -" \
		<< amount << " HP" << std::endl;
		if (this->_hit_points <= 0)
			std::cout << "ClapTrap " << this->_name << " is out of order" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already out of order" << std::endl;
		
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hit_points += amount;
	std::cout << "ClapTrap " << this->_name << "has been repaired ! +" \
	<< amount << " HP"<< std::endl;
}
