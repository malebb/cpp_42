#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	public :
		AAnimal();
		virtual ~AAnimal();
		AAnimal(AAnimal const & src);
		AAnimal&			operator=(AAnimal const & rhs);
		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
		AAnimal(std::string type);

	protected :
		std::string		_type;
};

#endif
