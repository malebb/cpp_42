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
		~Array(){};
		Array(Array const & src)
		{
			*this = src;
		}
		Array&			operator=(Array const & rhs)
		{
			this->_array = new T[this->_n];
			for (int i = 0; i < this->_n; i++)
			{
				this->_array[i] = rhs._array[i];
			}
			return (*this);
		}
		Array(unsigned int n) : _n(n)
		{
			this->_array = new T[n];
		}
		unsigned int	size(void)
		{
			return (this->_n);
		}
		T				get_array(unsigned int pos) const
		{
			if (pos < 0 || pos >= this->_n)
				throw (std::out_of_range("out of range"));
			return (this->_array[pos]);
		}
		void			set_array(unsigned int pos, T value)
		{
			if (pos < 0 || pos >= this->_n)
				throw (std::out_of_range("out of range"));
			this->_array[pos] = value;
		}

	private :
		T					*_array;
		unsigned int		_n;
};

#endif
