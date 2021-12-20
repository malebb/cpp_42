#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public :
		Animal();
		virtual ~Animal();
		Animal(Animal const & src);
		Animal&			operator=(Animal const & rhs);
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
		Animal(std::string type);

	protected :
		std::string		_type;
};

#endif
