#include "Span.hpp"

int	main(void)
{
	srand(time(NULL));
	std::cout << "------------ Test with 5 numbers ------------"
		<< std::endl;
	try
	{
		Span		span(5, -5, 5);
		std::vector<long long int>		nbrs;
		nbrs = span.get_nbrs();
		for (std::vector<long long int>::iterator it = nbrs.begin();
				it != nbrs.end(); it++)
		{
			std::cout << *it;
			if (it + 1 != nbrs.end())
				std::cout << ", ";
			else
				std::cout << std::endl;

		}
		std::cout << "Shortest span = " <<  span.shortestSpan() << std::endl;
		std::cout << "Longest span = " <<  span.longestSpan() << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "------------ Test with 11000 numbers ------------"
		<< std::endl;
	try
	{
		Span		span(11000);
		for (int i = 0; i < 11000; i++)
		{
			span.addNumber(rand() % 4294967295
 + (-2147483648));
		}
		std::cout << "Shortest span = " <<  span.shortestSpan() << std::endl;
		std::cout << "Longest span = " <<  span.longestSpan() << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "------------ Test add too many numbers ------------"
		<< std::endl;
	try
	{
		Span		span(3);
		for (int i = 0; i < 4; i++)
		{
			span.addNumber(3);
		}
		std::cout << "Shortest span = " <<  span.shortestSpan() << std::endl;
		std::cout << "Longest span = " <<  span.longestSpan() << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "------------ Determine span empty array ------------"
		<< std::endl;
	try
	{
		Span		span(0);

		span.shortestSpan();
		span.longestSpan();
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "------------ Determine span size = 1 array ------------"
		<< std::endl;
	try
	{
		Span		span(10);
		
		span.addNumber(5);
		span.shortestSpan();
		span.longestSpan();
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
