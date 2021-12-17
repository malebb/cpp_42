#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("unamed"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "A new CrapTrap has been created !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Oh ! it's the ClapTrap " << name << " ! HP = " << this->_hit_points << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Bye ClapTrap " << this->_name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return (*this);
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
		<< amount << " HP" << " | HP = " << this->_hit_points <<std::endl;
		if (this->_hit_points <= 0)
			std::cout << "ClapTrap " << this->_name << " is out of order" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already out of order" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hit_points += amount;
	std::cout << "ClapTrap " << this->_name << " has been repaired ! +" \
	<< amount << " HP" << " | HP = " << this->_hit_points << std::endl;
}
