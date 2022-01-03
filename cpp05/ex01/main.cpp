#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	std::cout << "------------ TEST FORM CLASS ------------" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "------------ Test too low to sign ------------" << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat		goodGuy("good guy", 31);
		Form			plantTree("plant tree", 30, 40);

		std::cout << goodGuy << std::endl;
		goodGuy.signForm(plantTree);
		goodGuy.increase_grade();
		std::cout << goodGuy << std::endl;
		goodGuy.signForm(plantTree);
		std::cout << plantTree << std::endl;
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
	return (0);
}
