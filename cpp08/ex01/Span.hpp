#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <vector>
#include <iostream>

class Span
{
	public :
		Span();
		virtual ~Span();
		Span(Span const & src);
		Span&							operator=(Span const & rhs);
		Span(unsigned int N);
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
