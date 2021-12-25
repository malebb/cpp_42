#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{

	public :
		class GradeTooLowException : public std::exception
		{
			public :
				GradeTooLowException();
				virtual const char* what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
			public :
				GradeTooHighException();
				virtual const char* what() const throw();
		};
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(Bureaucrat const & src);
		Bureaucrat&			operator=(Bureaucrat const & rhs);
		Bureaucrat(std::string name, unsigned int grade);
		std::string			getName(void) const;
		unsigned int		getGrade(void) const;
		void				increase_grade(void);
		void				decrease_grade(void);

	protected :
		std::string		_name;
		unsigned int	_grade;

};

std::ostream &		operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
