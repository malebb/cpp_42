#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public :
		FragTrap();
		~FragTrap();
		FragTrap(FragTrap const & src);
		FragTrap(std::string name);
		FragTrap	&operator=(FragTrap const & rhs);
		void		highFivesGuys(void);
};

#endif
