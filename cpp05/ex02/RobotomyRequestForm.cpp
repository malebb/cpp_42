#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy", 72, 45)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
	: AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	*this = src;
}

RobotomyRequestForm&		RobotomyRequestForm::operator=
			(RobotomyRequestForm const & rhs)
{
	(void)rhs;
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45)
{
	this->setTarget(target);
}

void	RobotomyRequestForm::action() const
{
	std::cout << "BrrrrrrrBrbrrrbrBRRRbrrr, said the drill" << std::endl;
}
