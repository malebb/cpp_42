#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "------------ Test intern class ------------" << std::endl;
	std::cout << std::endl;

	Intern			joj;
	AForm			*form;
	Bureaucrat		joblux("joblux", 1);

	try
	{
		form = joj.makeForm("presidential pardon", "joblux");
		std::cout << *form;
		joblux.signForm(*form);
		joblux.executeForm(*form);
		delete form;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what();
	}

	try
	{	
		form = joj.makeForm("wrong request", "joblux");
		std::cout << *form;
		delete form;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what();
	}
	return (0);
}
