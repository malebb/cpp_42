#include "easyfind.hpp" 

#include <vector>
#include <deque>
#include <list>
#include <iostream>

int	main(void)
{
	std::cout << std::endl;
	std::cout << "------------ [VECTOR CONTAINER] ------------" << std::endl;
	std::cout << std::endl;

	std::vector<int>						v_array;
	std::vector<int>::const_iterator		it;


	v_array.push_back(10);
	v_array.push_back(20);
	v_array.push_back(30);
	v_array.push_back(40);

	std::cout << "------------ Find a number ------------" << std::endl;
	std::cout << std::endl;

	try
	{
		it = easyfind(v_array, 20);
		std::cout << "Nb found = " << *it << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------ Find a missing number -------------" << std::endl;
	std::cout << std::endl;

	try
	{
		it = easyfind(v_array, 100);
		std::cout << "Nb found = " << *it << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------ [DEQUE CONTAINER] ------------" << std::endl;
	std::cout << std::endl;

	std::deque<int>						d_array;
	std::deque<int>::const_iterator		it_2;

	d_array.push_back(11);
	d_array.push_back(12);
	d_array.push_front(13);
	d_array.push_front(0);

	std::cout << "------------ Find a number ------------" << std::endl;
	std::cout << std::endl;

	try
	{
		it_2 = easyfind(d_array, 13);
		std::cout << "Nb found = " << *it_2 << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "------------ Find a missing number ------------" << std::endl;
	std::cout << std::endl;

	try
	{
		it_2 = easyfind(d_array, 22);
		std::cout << "Nb found = " << *it_2 << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "------------ [LIST CONTAINER] ------------" << std::endl;
	std::cout << std::endl;

	std::list<int>						l_array;
	std::list<int>::const_iterator			it_3;

	l_array.push_back(7);
	l_array.push_back(12);
	l_array.push_back(100);

	std::cout << "------------ Find a number ------------" << std::endl;
	std::cout << std::endl;

	try
	{
		it_3 = easyfind(l_array, 12);
		std::cout << "Nb found = " << *it_3 << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "------------ Find a missing number ------------" << std::endl;
	std::cout << std::endl;

	try
	{
		it_3 = easyfind(l_array, 325);
		std::cout << "Nb found = " << *it_3 << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}
