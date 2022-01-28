#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
	
	public :
		MutantStack()
		{
		}

		~MutantStack()
		{
		}

		MutantStack(MutantStack const & src)
		{
			*this = src;
		}

		MutantStack&		operator=(MutantStack const & rhs)
		{
			(void)rhs;
			return (*this);
		}
		
		typedef typename std::deque<T>::iterator	iterator;

		typename std::deque<T>::iterator		begin()
		{
			return (this->c.begin());
		}
		typename std::deque<T>::iterator		end()
		{
			return (this->c.end());
		}
};

#endif
