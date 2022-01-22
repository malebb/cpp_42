#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>
#include <iostream>
#include <algorithm>

template<typename T>
typename T::const_iterator easyfind(T const & container, int nb)
{
	typename T::const_iterator  it = find(container.begin(), container.end(), nb);

	if (it == container.end())
		throw(std::runtime_error("Integer does not exist"));
	return (it);
}

#endif
