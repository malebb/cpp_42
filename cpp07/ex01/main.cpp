#include "iter.hpp"

void	double_value(int & i)
{
	i*=2;
}

int	main(void)
{
	int		nbrs[3] = {1, 2, 3};

	iter(nbrs);
	return (0);
}
