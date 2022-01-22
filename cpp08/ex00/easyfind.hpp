#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <iostream>
#include <algorithm>

class ValueNotFoundException : public std::exception
{
	public :
		const char*		what() const throw()
		{
			return ("Value has not been found");
		}
};

template<typename T>
typename T::const_iterator easyfind(T const & container, int nb)
{
	typename T::const_iterator  it = find(container.begin(), container.end(), nb);

	if (it == container.end())
		throw(ValueNotFoundException());
	return (it);
}

#endif
