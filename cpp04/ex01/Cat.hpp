#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public :
		Cat();
		~Cat();
		Cat(Cat const & src);
		Cat&		operator=(Cat const & rhs);
		void		makeSound(void) const;
		Brain*		get_brain(void) const;
	
	private :
		Brain		*_brain;
};

#endif
