#include "iter.hpp"

int	main(void)
{
	int				nbrs[3] = {1, 2, 3};
	std::string		strs[3] = {"magenta", "green", "blue"};

	iter(nbrs, 3, &display);
	iter(strs, 3, &display);
	return (0);
}
