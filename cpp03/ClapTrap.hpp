#include "ClapTrap.hpp"

class ClapTrap
{
	public :
		void			attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

	private :
		std::string		name;
		unsigned int	hit_points;
		unsigned int	energy_point;
		unsigned int	attack_damage;
};
