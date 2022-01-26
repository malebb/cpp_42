#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>
#include <iostream>
#include <iostream>
#include <stdlib.h>
#include <algorithm>

class Random
{
	public :
		Random(long long int min, long long int max) : _min(min), _max(max)
		{
			srand(time(NULL));
		}
		long long int		operator()()
		{
			return (rand() % (this->_max - this->_min)
 + (this->_min));
		}

	private :
		long long int		_min;
		long long int		_max;
};

class Span
{
	public :
		Span();
		virtual ~Span();
		Span(Span const & src);
		Span&							operator=(Span const & rhs);
		Span(unsigned int N);
		Span(unsigned int N, long long int min, long long int max);
		void							addNumber(long long int nb);
		std::vector<long long int>		get_nbrs(void) const;
		long long int					shortestSpan() const;
		long long int					longestSpan() const;

		class FullArrayException : public std::exception
		{
			const char*		what() const throw();
		};

		class NotEnoughNumbersException : public std::exception
		{
			const char*		what() const throw();
		};

	private :
		unsigned int					_N;
		std::vector<long long int>		_nbrs;
};

#endif
