#ifndef FORM_HPP
# define FORM_HPP

# include <exception>

# include "Bureaucrat.hpp"

class Form
{
	public :
		class GradeTooLowException : public std::exception
		{
			public :
				GradeTooLowException();
				virtual const char * what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public :
				GradeTooHighException();
				virtual const char * what() const throw();
		};
		Form();
		virtual ~Form();
		Form(Form const & src);
		Form&			operator=(Form const & rhs);
		Form(std::string name, const int grade_to_sign, const int grade_to_execute);
		void			beSigned(Bureaucrat const & bureaucrat);
		bool			getSigned(void) const;
		std::string		getName(void) const;
		int				getGradeToSign(void) const;
		int				getGradeToExecute(void) const;
	
	private :
		bool					_signed;
		const std::string		_name;
		const int				_grade_to_sign;
		const int				_grade_to_execute;
};

std::ostream&		operator<<(std::ostream & o, Form const & rhs);

#endif
