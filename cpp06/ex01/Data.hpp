#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	public :
		Data() : _info("some data"){}
		~Data(){}
		Data(Data const & src)
		{
			*this = src;
		}
		Data&		operator=(Data const & rhs)
		{
			this->_info = rhs._info;
			return (*this);
		}
		Data(std::string info) : _info(info){}
		std::string		get_info(void) const
		{
			return (this->_info);
		}

	private :
		std::string		_info;
};

#endif
