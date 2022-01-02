#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(Intern const & src)
{
	*this = src;
}

Intern&		Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

AForm*		Intern::makeForm(const std::string & name, const std::string & target)
{
	AForm			*forms[3] = {new ShrubberyCreationForm(target),
					new RobotomyRequestForm(target),
					new PresidentialPardonForm(target)};
	AForm			*form_selected;

	form_selected = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i]->getName())
		{
			form_selected = forms[i];
			std::cout << "Intern has created form " << forms[i]->getName()
				<< std::endl;
		}
		else
			delete forms[i];
	}
	if (!form_selected)
		throw(UnknownFormNameException());
	return (form_selected);
}

Intern::UnknownFormNameException::UnknownFormNameException()
{

}

const char*			Intern::UnknownFormNameException::what() const throw()
{
	return ("Form name does not exist\n");
}
