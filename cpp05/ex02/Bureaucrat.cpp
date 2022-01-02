#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("unnamed"), _grade(150)
{
	
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
}

Bureaucrat&		Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name),
					_grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

std::string		Bureaucrat::getName(void) const
{
	return (this->_name);
}

int				Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void			Bureaucrat::increase_grade(void)
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	this->_grade--;
}

void			Bureaucrat::decrease_grade(void)
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	this->_grade++;
}

const char*		Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low, minimum is 150\n");
}

const char*		Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high, maximum is 1\n");
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << " bureaucrat has grade " <<
		rhs.getGrade() << std::endl;
	return (o);
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
}

void			Bureaucrat::signForm(AForm & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "Bureaucrat " << this->getName() << " signs "
			<< form.getName() << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cout << "Bureaucrat " << this->getName() << " cannot sign "
			<< form.getName() << " because " << e.what() << std::endl;
	}
}

void			Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << "Bureaucrat " << this->getName() << " has executed "
			<< form.getName() << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cout << "Bureaucrat " << this->getName() << " cannot execute "
			<< form.getName() << " because " << e.what();
	}
}

