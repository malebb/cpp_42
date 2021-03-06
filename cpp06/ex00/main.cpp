#include "Conversion.hpp"

int	main(int argc, char **argv)
{
	std::string		str;
	Conversion		*conv;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}

	str = argv[1];
	conv = new Conversion(str);
	std::cout << *conv;

	delete conv;

	return (0);
}
