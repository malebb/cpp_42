#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <unistd.h>
int	main(void)
{

	std::cout << std::endl;
	std::cout << "------------ TEST BUREAUCRAT CLASS ------------" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "------------ Test upper limit ------------" << std::endl;
	std::cout << std::endl;

	Bureaucrat		*maleb = new Bureaucrat("maleb", 3);

	for (int i = 0; i < 3; i++)
	{
		try
		{
			maleb->increase_grade();
			std::cout << *maleb;
		}
		catch (std::exception const & e)
		{
			std::cout << e.what();
		}
	}

	delete maleb;

	std::cout << std::endl;
	std::cout << "------------ Test lower limit ------------" << std::endl;
	std::cout << std::endl;

	Bureaucrat		*dylan = new Bureaucrat("dylan", 148);

	for (int i = 0; i < 3; i++)
	{
		try
		{
			dylan->decrease_grade();
			std::cout << *dylan;
		}
		catch (std::exception const & e)
		{
			std::cout << e.what();
		}
	}

	delete dylan;

	std::cout << std::endl;
	std::cout << "------------ Test invalid contructor value ------------" << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat		*uncle = new Bureaucrat("uncle", 1000);
		std::cout << *uncle;
		delete (uncle);
	}
	catch (std::exception const & e)
	{
		std::cout << e.what();
	}

	try
	{
		Bureaucrat		*uncle = new Bureaucrat("uncle", 0);
		std::cout << *uncle;
		delete uncle;
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
		Bureaucrat					*joj = new Bureaucrat("joj", 1);
		Bureaucrat					*joblux = new Bureaucrat("joblux", 150);

		ShrubberyCreationForm		*tree = new ShrubberyCreationForm("tree");
		RobotomyRequestForm			*robotomy = new RobotomyRequestForm("robotomy");
		PresidentialPardonForm		*presidential = new PresidentialPardonForm("joj");

		joj->executeForm(*tree);
		joj->executeForm(*robotomy);
		joj->executeForm(*presidential);

		std::cout << std::endl;

		joj->signForm(*tree);
		joj->signForm(*robotomy);
		joj->signForm(*presidential);

		std::cout << std::endl;

		joj->executeForm(*tree);
		joj->executeForm(*robotomy);
		joj->executeForm(*presidential);

		std::cout << std::endl;

		joblux->executeForm(*tree);
		joblux->executeForm(*robotomy);
		joblux->executeForm(*presidential);
		
		delete joj;
		delete joblux;
		delete tree;
		delete robotomy;
		delete presidential;
	}
	catch (std::exception const & e)
	{
		std::cout << e.what();
	}
	return (0);
}
