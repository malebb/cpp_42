#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45)
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
	(void)rhs;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("Robotomy", 72, 45)
{
	srand(time(NULL));
	this->setTarget(target);
}

void	RobotomyRequestForm::action() const
{
	std::cout << "BrrrrrrrBrbrrrbrBRRRbrrr, said the drill" << std::endl;
	if (((rand() % 2) + 1) == 1)
	{
		std::cout << getTarget() << " has been robotomized sucessfully"
			<< std::endl;
	}
	else
	{
		std::cout << getTarget() << " could not be robotomized"
			<< std::endl;
	}
}
