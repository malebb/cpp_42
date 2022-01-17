#include "Array.hpp"

int	main(void)
{
	std::cout << "------------ Test String array ------------" << std::endl;
	std::cout << std::endl;

	Array<std::string>		animals(3);

	animals[0] = "fox";
	animals[1] = "sheep";
	animals[2] = "pig";
	try
	{
		for (unsigned int i = 0; i < animals.size(); i++)
		{
			std::cout << animals[i] << std::endl;
		}
	}
	catch(std::exception const & e)
	{
		std::cout << e.what();
	}

	std::cout << std::endl;
	std::cout << "------------ Test int array ------------" << std::endl;
	std::cout << std::endl;

	Array<int>				nbrs(3);
	nbrs[0] = 22;
	nbrs[1] = 33;
	nbrs[2] = 44;
	try
	{
		for (unsigned int i = 0; i < nbrs.size(); i++)
		{
			std::cout << nbrs[i] << std::endl;
		}
	}
	catch(std::exception const & e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
	std::cout << "------------ Test copy and assignment operator ------------" << std::endl;
	std::cout << std::endl;


	Array<int>			nbrs_cpy(nbrs);

	nbrs_cpy[1] = 99;
	std::cout << "nbrs array : " << std::endl;
	try
	{
		for (unsigned int i = 0; i < nbrs.size(); i++)
		{
			std::cout << nbrs[i] << std::endl;
		}
	}
	catch(std::exception const & e)
	{
		std::cout << e.what();
	}

	std::cout << "nbrs copy array : " << std::endl;
	try
	{
		for (unsigned int i = 0; i < nbrs.size(); i++)
		{
			std::cout << nbrs_cpy[i] << std::endl;
		}
	}
	catch(std::exception const & e)
	{
		std::cout << e.what();
	}

	std::cout << std::endl;
	std::cout << "------------ Test empty array ------------" << std::endl;
	std::cout << std::endl;

	Array<char>			empty_array = Array<char>();

	try
	{
		empty_array[0];
	}
	catch(std::exception const & e)
	{
		std::cout << e.what();
	}

	std::cout << std::endl;

	return (0);
}
