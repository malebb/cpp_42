#include "Bureaucrat.hpp"

int	main(void)
{
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
	return (0);
}
