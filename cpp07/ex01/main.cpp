#include "iter.hpp"

int	main(void)
{
	int				nbrs[3] = {1, 2, 3};
	std::string		strs[4] = {"magenta", "green", "blue", "rose"};

	iter(nbrs, 3, &display);
	iter(strs, 4, &display);
	return (0);
}
