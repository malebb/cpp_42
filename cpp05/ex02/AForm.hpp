#ifndef AFORM_HPP
# define AFORM_HPP

# include <exception>

# include "Bureaucrat.hpp"

class AForm
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
		class NotSignedFormException : public std::exception
		{
			public :
				NotSignedFormException();
				virtual const char * what() const throw();
		};
		class GradeRequiredException : public std::exception
		{
			public :
				GradeRequiredException();
				virtual const char * what() const throw();
		};
		AForm();
		virtual ~AForm();
		AForm(AForm const & src);
		AForm&			operator=(AForm const & rhs);
		AForm(std::string name, const int grade_to_sign, const int grade_to_execute);
		void			beSigned(Bureaucrat const & bureaucrat);
		bool			getSigned(void) const;
		std::string		getName(void) const;
		int				getGradeToSign(void) const;
		int				getGradeToExecute(void) const;
		std::string		getTarget(void) const;
		void			setTarget(std::string target);
		void			setSigned(int signed_value);
		void			execute(Bureaucrat const & executor) const;
		virtual void	action() const = 0;
	
	private :
		bool					_signed;
		const std::string		_name;
		const int				_grade_to_sign;
		const int				_grade_to_execute;
		std::string				_target;

};

std::ostream&		operator<<(std::ostream & o, AForm const & rhs);

#endif
