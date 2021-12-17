FragTrap::FragTrap(): 
{
	std::cout << "A new FragTrap has been created !" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Bye FragTrap " << this->name << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
}
