#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	public :
		Array() : _n(0)
		{
			this->_array = new T[0];
		}
		virtual ~Array()
		{
			delete [] this->_array;
		}
		Array(Array const & src)
		{
			*this = src;
		}
		Array&			operator=(Array const & rhs)
		{
			this->_n = rhs._n;
			this->_array = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++)
			{
				this->_array[i] = rhs._array[i];
			}
			return (*this);
		}
		Array(unsigned int n) : _array(new T[n]), _n(n)
		{
		}
		unsigned int	size(void)
		{
			return (this->_n);
		}
		T&				operator[](unsigned int pos)
		{
			if (pos < 0 || pos >= this->_n)
				throw(std::out_of_range("out of range"));
			return (this->_array[pos]);
		}

	private :
		T					*_array;
		unsigned int		_n;
};

#endif
