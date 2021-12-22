#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public :
		Dog();
		~Dog();
		Dog(Dog const & src);
		Dog&		operator=(Dog const & rhs);
		void		makeSound(void) const;
		Brain*		get_brain(void) const;

	private :
		Brain		*_brain;
};

#endif
