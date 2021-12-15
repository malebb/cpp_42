#ifndef		CLAPTRAP_H
#define		CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	public :
		ClapTrap(std::string name);
		~ClapTrap();
		void			attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

	private :
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
};

#endif
