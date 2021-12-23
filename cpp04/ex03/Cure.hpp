#ifndef CURE_HPP 
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		virtual ~Cure();
		Cure(Cure const & src);
		Cure&			operator=(Cure const & rhs);
		void			use(ICharacter& target);
		AMateria* 		clone() const;
};

#endif
