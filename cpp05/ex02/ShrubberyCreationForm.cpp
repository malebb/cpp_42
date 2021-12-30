#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery", 145, 137)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
	: AForm(src.getName(), src.getGradeToSign(), src.getGradeToExecute())
{
	*this = src;
}

ShrubberyCreationForm&		ShrubberyCreationForm::operator=
			(ShrubberyCreationForm const & rhs)
{
	(void)rhs;
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137)
{
	this->setTarget(target);
}

void	ShrubberyCreationForm::action() const
{
	std::ofstream		shrubbery_file;

	shrubbery_file.open((this->getTarget() + "_shrubbery").c_str());
	shrubbery_file << "  /\\" << std::endl;
	shrubbery_file << "|    |" << std::endl;
	shrubbery_file << "------" << std::endl;
	shrubbery_file << "  ||" << std::endl;
	shrubbery_file << "  ||" << std::endl;
	shrubbery_file << "  ||" << std::endl;
}
