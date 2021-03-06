#include "AForm.hpp"

AForm::AForm() : _signed(false), _name("Basic"), _grade_to_sign(30),
	_grade_to_execute(30)
{

}

AForm::~AForm()
{

}

AForm::AForm(AForm const & src): _name(src._name), _grade_to_sign(src._grade_to_sign), _grade_to_execute(src._grade_to_execute)
{
	*this = src;
}

AForm&		AForm::operator=(AForm const & rhs)
{
	this->_signed = rhs._signed;
	this->_target = rhs._target;
	return (*this);
}

AForm::AForm(std::string name, const int grade_to_sign,
		const int grade_to_execute) : _signed(false), _name(name),
			_grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw(GradeTooHighException());
	if (grade_to_sign > 150 || grade_to_execute > 150)
		throw(GradeTooLowException());
}

const char *		AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low\n");
}

const char *		AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}

const char *		AForm::NotSignedFormException::what() const throw()
{
	return ("Form is not signed yet\n");
}

const char *		AForm::GradeRequiredException::what() const throw()
{
	return ("Bureaucrat grade is to low to execute form\n");
}

AForm::GradeTooHighException::GradeTooHighException()
{

}

AForm::GradeTooLowException::GradeTooLowException()
{

}

AForm::NotSignedFormException::NotSignedFormException()
{

}

AForm::GradeRequiredException::GradeRequiredException()
{

}

void				AForm::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_grade_to_sign)
		this->_signed = true;
	else
		throw(GradeTooLowException());
}

bool				AForm::getSigned(void) const
{
	return (this->_signed);
}

std::string			AForm::getName(void) const
{
	return (this->_name);
}

int					AForm::getGradeToSign(void) const
{
	return (this->_grade_to_sign);
}

int					AForm::getGradeToExecute(void) const
{
	return (this->_grade_to_execute);
}

std::string			AForm::getTarget(void) const
{
	return (this->_target);
}

std::ostream&		operator<<(std::ostream & o, AForm const & rhs)
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

void				AForm::setTarget(std::string target)
{
	this->_target = target;
}

void				AForm::setSigned(int signed_value)
{
	this->_signed = signed_value;
}

void			AForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw(NotSignedFormException());
	if (executor.getGrade() <= this->getGradeToExecute())
		this->action();
	else
		throw(GradeRequiredException());
}
