#include <iostream>
#include <cstdlib>

int		main(void)
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << 0 + ( std::rand() % ( 11 - 0 + 1 ) ) << std::endl;
	}
	return (0);
}
