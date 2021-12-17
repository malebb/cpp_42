class	FrapTrap : public ClapTrap
{
	public :
		FragTrap();
		~FragTrap();
		FragTrap(FragTrap const & src);
		FragTrap(std::string name);
		FragTrap	&operator=(FragTrap const & rhs);
};
