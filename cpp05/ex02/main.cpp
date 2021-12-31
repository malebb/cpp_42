#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <unistd.h>
int	main(void)
{
/*	
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
	}
	catch (std::exception const & e)
	{
		std::cout << e.what();
	}

	try
	{
		Bureaucrat		*uncle = new Bureaucrat("uncle", 0);
		std::cout << *uncle;
	}
	catch (std::exception const & e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
	std::cout << "------------ TEST FORM CLASS ------------" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "------------ Test too low to sign ------------" << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat		*goodGuy = new Bureaucrat("good guy", 31);
		Form			*plantTree = new Form("plant tree", 30, 40);

		std::cout << *goodGuy << std::endl;
		goodGuy->signForm(*plantTree);
		goodGuy->increase_grade();
		std::cout << *goodGuy << std::endl;
		goodGuy->signForm(*plantTree);
		std::cout << *plantTree << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
	std::cout << "------------ Test invalid constructor value ------------" << std::endl;
	std::cout << std::endl;
	try
	{
		const Form		invalid_form = Form("invalid form", 0, 30);
	}
	catch (std::exception const & e)
	{
		std::cout << e.what();
	}
	try
	{
		const Form		invalid_form = Form("invalid form", 30, 0);
	}
	catch (std::exception const & e)
	{
		std::cout << e.what();
	}
	try
	{
		const Form		invalid_form = Form("invalid form", 151, 40);
	}
	catch (std::exception const & e)
	{
		std::cout << e.what();
	}
	try
	{
		const Form		invalid_form = Form("invalid form", 20, 151);
	}
	catch (std::exception const & e)
	{
		std::cout << e.what();
	}
*/
	RobotomyRequestForm			*robotomy = new RobotomyRequestForm("robotomy");
	PresidentialPardonForm		*presidential = new PresidentialPardonForm("joj");
	ShrubberyCreationForm		*tree = new ShrubberyCreationForm("tree");
	Bureaucrat					*joj = new Bureaucrat("joj", 1);

	joj->signForm(*tree);
	joj->signForm(*robotomy);
	joj->signForm(*presidential);
	joj->executeForm(*tree);
	joj->executeForm(*robotomy);
	joj->executeForm(*presidential);

	delete tree;
	delete joj;

	return (0);
}
