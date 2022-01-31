#include "MutantStack.hpp"

#include <list>
#include <iostream>

int	main(void)
{
	MutantStack<int>		nbrs_mutant;

	nbrs_mutant.push(1);
	nbrs_mutant.push(10);
	nbrs_mutant.push(20);
	nbrs_mutant.push(30);

	std::cout << "------------ Test iterate ------------" << std::endl;
	std::cout << std::endl;

	for (MutantStack<int>::iterator it = nbrs_mutant.begin(); it != nbrs_mutant.end(); it++)
	{
		std::cout << *it;
		if (it + 1 != nbrs_mutant.end())
			std::cout << " ";
		else
			std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------ Test iterate upside down ------------" << std::endl;
	std::cout << std::endl;

	MutantStack<int>::iterator iter = nbrs_mutant.end();

	std::cout << *--iter;
	std::cout << " ";
	std::cout << *--iter;

	std::cout << std::endl;
	std::cout << "------------ Test iterate copy ------------" << std::endl;
	std::cout << std::endl;

	MutantStack<int>		nbrs_mutant2(nbrs_mutant);
	for (MutantStack<int>::iterator it = nbrs_mutant2.begin(); it != nbrs_mutant2.end(); it++)
	{
		std::cout << *it;
		if (it + 1 != nbrs_mutant2.end())
			std::cout << " ";
		else
			std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------ Test main subject's main ------------" << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "------------ Test with MutantStack ------------" << std::endl;
	std::cout << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl;
	std::cout << "------------ Test with List ------------" << std::endl;
	std::cout << std::endl;

	std::list<int> lst;

	lst.push_back(5);
	lst.push_back(17);
	std::cout << lst.back() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);

	lst.push_back(0);
	std::list<int>::iterator i = lst.begin();
	std::list<int>::iterator j = lst.end();
	++i;
	--i;
	while (i != j)
	{
		std::cout << *i << std::endl;
		++i;
	}
	std::list<int> s2(lst);

	return (0);
}
