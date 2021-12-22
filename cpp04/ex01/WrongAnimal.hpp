#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public :
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(WrongAnimal const & src);
		WrongAnimal&			operator=(WrongAnimal const & rhs);
		void			makeSound(void) const;
		std::string		getType(void) const;
		WrongAnimal(std::string type);

	protected :
		std::string		_type;
};

#endif
