#include "Span.hpp"

#include <iostream>

int	main(void)
{
	Span		span(5);
	std::vector<long long int>		nbrs;

	try
	{
		span.addNumber(5);
		span.addNumber(7);
		span.addNumber(8);
		span.addNumber(90);
		std::cout << "Shortest span = " <<  span.shortestSpan() << std::endl;
		std::cout << "Longest span = " <<  span.longestSpan() << std::endl;
	}
	catch(std::exception const & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
