#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	display(T & elem)
{
	std::cout << elem << std::endl;
}

template<typename T>
void	iter(T *array, unsigned int length, void(*f)(T&))
{
	for (unsigned int i = 0; i < length; i++)
	{
		(*f)(array[i]);
	}
}

#endif
