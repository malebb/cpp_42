#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public :
		class UnknownFormNameException : public std::exception
		{
			public :
				UnknownFormNameException();
				virtual const char*		what() const throw();
		};
		Intern();
		~Intern();
		Intern(Intern const & src);
		Intern&		operator=(Intern const & rhs);
		AForm*		makeForm(const std::string & name, const std::string & target);
};

#endif
