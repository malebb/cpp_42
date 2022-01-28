#include "MutantStack.hpp"

#include <stack>
#include <iostream>

int	main(void)
{
	std::stack<int>		nbrs;

	nbrs.push(1);
	nbrs.push(10);
	nbrs.push(20);
	nbrs.push(30);

	for (int i = 0; i < 4; i++)
	{
		std::cout << nbrs.top() << std::endl;
		nbrs.pop();
	}

	MutantStack<int>		nbrs_mutant;

	nbrs_mutant.push(1);
	nbrs_mutant.push(10);
	nbrs_mutant.push(20);
	nbrs_mutant.push(30);

	for (MutantStack<int>::iterator it = nbrs_mutant.begin(); it != nbrs_mutant.end(); it++)
	{
		std::cout << *it;
		if (it + 1 != nbrs_mutant.end())
			std::cout << " ";
		else
			std::cout << std::endl;
	}

	return (0);
}
