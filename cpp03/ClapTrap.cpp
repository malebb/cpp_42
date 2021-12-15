ClapTrap::ClapTrap(std::string name) : _name(name), _hit_point(10), _energy_point(10) _attack_damage(0)
{
	std::cout << "oh! it's " << name << "!" <<std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "bye " << name << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->name << " attack " << target std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	
}
