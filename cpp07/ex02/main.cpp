#include "Array.hpp"

int	main(void)
{
	Array<std::string>		animals(3);
	Array<int>				nbrs(3);

	animals.set_array(0, "chicken");
	animals.set_array(1, "sheep");
	animals.set_array(2, "cow");
	try
	{
		for (unsigned int i = 0; i < animals.size(); i++)
		{
			std::cout << animals.get_array(i) << std::endl;
		}
	}
	catch(std::exception const & e)
	{
		std::cout << e.what();
	}
	std::cout << std::endl;
	nbrs.set_array(0, 22);
	nbrs.set_array(1, 33);
	nbrs.set_array(2, 44);
	try
	{
		for (unsigned int i = 0; i < nbrs.size(); i++)
		{
			std::cout << nbrs.get_array(i) << std::endl;
		}
	}
	catch(std::exception const & e)
	{
		std::cout << e.what();
	}
	return (0);
}
