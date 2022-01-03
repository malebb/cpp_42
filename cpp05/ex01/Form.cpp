#include "Form.hpp"

Form::Form() : _signed(false), _name("Basic"), _grade_to_sign(30),
	_grade_to_execute(30)
{

}

Form::~Form()
{

}

Form::Form(Form const & src): _name(src._name), _grade_to_sign(src._grade_to_sign), _grade_to_execute(src._grade_to_execute)
{
	*this = src;
}

Form&		Form::operator=(Form const & rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}

Form::Form(std::string name, const int grade_to_sign,
		const int grade_to_execute) : _signed(false), _name(name),
			_grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw(GradeTooHighException());
	if (grade_to_sign > 150 || grade_to_execute > 150)
		throw(GradeTooLowException());
}

const char *		Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low\n");
}

const char *		Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}

Form::GradeTooHighException::GradeTooHighException()
{

}

Form::GradeTooLowException::GradeTooLowException()
{

}

void				Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_grade_to_sign)
		this->_signed = true;
	else
		throw(GradeTooLowException());
}

bool				Form::getSigned(void) const
{
	return (this->_signed);
}

std::string			Form::getName(void) const
{
	return (this->_name);
}

int					Form::getGradeToSign(void) const
{
	return (this->_grade_to_sign);
}

int					Form::getGradeToExecute(void) const
{
	return (this->_grade_to_execute);
}

std::ostream&		operator<<(std::ostream & o, Form const & rhs)
{
	o << "Form " << rhs.getName();
	if (rhs.getSigned())
		o << " is signed ";
	else
		o << " is not signed ";
	o << ", minimum rank to sign and to execute are respectively "
		<< rhs.getGradeToSign() << " and " << rhs.getGradeToExecute() << std::endl;
	return (o);
}
