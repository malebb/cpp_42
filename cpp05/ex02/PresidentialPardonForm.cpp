#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidential pardon", 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
	: AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	*this = src;
}

PresidentialPardonForm&		PresidentialPardonForm::operator=
			(PresidentialPardonForm const & rhs)
{
	this->setSigned(rhs.getSigned());
	this->setTarget(rhs.getTarget());
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("presidential pardon", 25, 5)
{
	this->setTarget(target);
}

void	PresidentialPardonForm::action() const
{
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox"
		<< std::endl;
}
