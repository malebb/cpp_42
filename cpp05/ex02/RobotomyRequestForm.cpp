#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy request", 72, 45)
{
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
	: AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	srand(time(NULL));
	*this = src;
}

RobotomyRequestForm&		RobotomyRequestForm::operator=
			(RobotomyRequestForm const & rhs)
{
	this->setSigned(rhs.getSigned());
	this->setTarget(rhs.getTarget());
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("robotomy request", 72, 45)
{
	srand(time(NULL));
	this->setTarget(target);
}

void	RobotomyRequestForm::action() const
{
	std::cout << "BrrrrrrrBrbrrrbrBRRRbrrr, said the drill" << std::endl;
	if (((rand() % 2) + 1) == 1)
	{
		std::cout << this->getTarget() << " has been robotomized sucessfully"
			<< std::endl;
	}
	else
	{
		std::cout << this->getTarget() << " could not be robotomized"
			<< std::endl;
	}
}
