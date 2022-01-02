#include "AForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "------------ Test intern class ------------" << std::endl;
	std::cout << std::endl;

	Intern			joj;
	AForm			*form;

	try
	{	
		form = joj.makeForm("robotomy request", "joblux");
		std::cout << *form;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what();
	}

	try
	{	
		form = joj.makeForm("wrong request", "joblux");
		std::cout << *form;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what();
	}
	return (0);
}
