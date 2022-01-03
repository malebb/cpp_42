#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "------------ TEST BUREAUCRAT CLASS ------------" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "------------ Test upper limit ------------" << std::endl;
	std::cout << std::endl;

	Bureaucrat		maleb("maleb", 3);

	for (int i = 0; i < 3; i++)
	{
		try
		{
			maleb.increase_grade();
			std::cout << maleb;
		}
		catch (std::exception const & e)
		{
			std::cout << e.what();
		}
	}

	std::cout << std::endl;
	std::cout << "------------ Test lower limit ------------" << std::endl;
	std::cout << std::endl;

	Bureaucrat		dylan("dylan", 148);

	for (int i = 0; i < 3; i++)
	{
		try
		{
			dylan.decrease_grade();
			std::cout << dylan;
		}
		catch (std::exception const & e)
		{
			std::cout << e.what();
		}
	}

	std::cout << std::endl;
	std::cout << "------------ Test invalid contructor value ------------" << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat		uncle("uncle", 1000);
		std::cout << uncle;
	}
	catch (std::exception const & e)
	{
		std::cout << e.what();
	}

	try
	{
		Bureaucrat		uncle("uncle", 0);
		std::cout << uncle;
	}
	catch (std::exception const & e)
	{
		std::cout << e.what();
	}

	std::cout << std::endl;
	std::cout << "------------ Test FORMS ------------" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "------------ Test execute signed form ------------" << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat					joj("joj", 1);
		Bureaucrat					joblux("joblux", 150);

		ShrubberyCreationForm		tree("tree");
		RobotomyRequestForm			robotomy("robotomy");
		PresidentialPardonForm		presidential("joj");

		joj.executeForm(tree);
		joj.executeForm(robotomy);
		joj.executeForm(presidential);

		std::cout << std::endl;

		joj.signForm(tree);
		joj.signForm(robotomy);
		joj.signForm(presidential);

		std::cout << std::endl;

		joj.executeForm(tree);
		joj.executeForm(robotomy);
		joj.executeForm(presidential);

		std::cout << std::endl;

		joblux.executeForm(tree);
		joblux.executeForm(robotomy);
		joblux.executeForm(presidential);
		
	}
	catch (std::exception const & e)
	{
		std::cout << e.what();
	}
	return (0);
}
