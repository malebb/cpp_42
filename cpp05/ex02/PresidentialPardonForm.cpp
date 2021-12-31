#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential pardon", 72, 45)
{
	srand(time(NULL));
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
	: AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	srand(time(NULL));
	*this = src;
}

PresidentialPardonForm&		PresidentialPardonForm::operator=
			(PresidentialPardonForm const & rhs)
{
	(void)rhs;
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("Presidential pardon", 72, 45)
{
	srand(time(NULL));
	this->setTarget(target);
}

void	PresidentialPardonForm::action() const
{
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox"
		<< std::endl;
}
