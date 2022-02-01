#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

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
			this->c = rhs.c;
			return (*this);
		}
		
		typedef typename std::deque<T>::iterator		iterator;

		typename std::deque<T>::iterator				begin()
		{
			return (this->c.begin());
		}

		typename std::deque<T>::iterator				end()
		{
			return (this->c.end());
		}
};

#endif
