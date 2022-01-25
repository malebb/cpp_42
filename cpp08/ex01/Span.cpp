#include "Span.hpp"

Span::Span() : _N(0)
{

}

Span::~Span()
{

}

Span::Span(Span const & src)
{
	*this = src;
}

Span&							Span::operator=(Span const & rhs)
{
	this->_N = rhs._N;
	this->_nbrs = rhs._nbrs;
	return (*this);
}

Span::Span(unsigned int N)
{
	this->_N = N;
}

Span::Span()
{
	Random		random_generator;

	if (this->_nbrs.size() != this->_N)
	{
		std::generate(this->_nbrs.begin() + this->_nbrs.size(), this->_nbrs.end(), random_generator);
	}
}
const char*						Span::FullArrayException::what() const throw()
{
	return ("Array is full");
}

const char*						Span::NotEnoughNumbersException::what() const throw()
{
	return ("Cannot determine span : not enough numbers");
}

void							Span::addNumber(long long int nb)
{
	if (this->_nbrs.size() >= this->_N)
		throw(FullArrayException());
	this->_nbrs.push_back(nb);
}

std::vector<long long int>		Span::get_nbrs(void) const
{
	return (this->_nbrs);
}

long long int					Span::shortestSpan() const
{
	long long int							smallest_span;
	long long int							current_span;

	if (this->_nbrs.size() <= 1)
		throw(NotEnoughNumbersException());
	for (unsigned int i = 0; i < this->_nbrs.size() - 1; i++)
	{
		std::vector<long long int>::const_iterator current = this->_nbrs.begin() + i;
		for (std::vector<long long int>::const_iterator it = this->_nbrs.begin() + i + 1;
			   	it != this->_nbrs.end(); it++)
		{
			if (*current > *it)
				current_span = *current - *it;
			else
				current_span = *it - *current;
			if (i == 0 && it == current + 1)
				smallest_span = current_span;
			else if (current_span < smallest_span)
				smallest_span = current_span;
		}
	}
	return (smallest_span);
}

long long int					Span::longestSpan() const
{
	long long int							longest_span;
	long long int							current_span;

	if (this->_nbrs.size() <= 1)
		throw(NotEnoughNumbersException());
	for (unsigned int i = 0; i < this->_nbrs.size() - 1; i++)
	{
		std::vector<long long int>::const_iterator current = this->_nbrs.begin() + i;
		for (std::vector<long long int>::const_iterator it = this->_nbrs.begin() + i + 1;
			   	it != this->_nbrs.end(); it++)
		{
			if (*current > *it)
				current_span = *current - *it;
			else
				current_span = *it - *current;
			if (i == 0 && it == current + 1)
				longest_span = current_span;
			else if (current_span > longest_span)
				longest_span = current_span;
		}
	}
	return (longest_span);
}

