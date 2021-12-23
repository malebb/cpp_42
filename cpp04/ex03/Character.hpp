#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public :
		Character();
		virtual ~Character();
		Character(Character const & src);
		Character&				operator=(Character const & rhs);
		Character(std::string name);
		std::string const &		getName() const;
		void					equip(AMateria* m);
		void					unequip(int idx);
		void					use(int idx, ICharacter& target);
	
	protected :
		std::string		_name;
		AMateria		*_inventory[4];
};

#endif
