#include "Conversion.hpp"

Conversion::Conversion() : _char_rep('0'), _int_rep(0), _float_rep(0),
			_double_rep(0)
{
}

Conversion::~Conversion()
{

}

Conversion::Conversion(Conversion const & src)
{
	*this = src;
}

static bool		is_number(std::string & s_rep)
{
	for (int i = 0; i < static_cast<int>(s_rep.length()); i++)
	{
		if (s_rep[i] < '0' || s_rep[i] > '9')
			return (false);
	}
	return (true);
}

Conversion::Conversion(std::string & s_rep)
{
	if (is_number(s_rep))
		this->convert_from_int(s_rep);
	else if (s_rep.length() == 1 && !(s_rep[0] >= '0' && s_rep[0] <= '9'))
		this->convert_from_char(s_rep);
	else if (s_rep.find(".") != std::string::npos &&
			s_rep.find("f") != std::string::npos)
		this->convert_from_float(s_rep);
	else if (s_rep.find(".") != std::string::npos)
		this->convert_from_double(s_rep);
}

Conversion&		Conversion::operator=(Conversion const & rhs)
{
	this->_char_rep = rhs._char_rep;
	this->_int_rep = rhs._int_rep;
	this->_float_rep = rhs._float_rep;
	this->_double_rep = rhs._double_rep;
	return (*this);
}

char			Conversion::get_char_rep(void) const
{
	return (this->_char_rep);
}

int				Conversion::get_int_rep(void) const
{
	return (this->_int_rep);
}

float			Conversion::get_float_rep(void) const
{
	return (this->_float_rep);
}

double			Conversion::get_double_rep(void) const
{
	return (this->_double_rep);
}

void			Conversion::convert_from_char(std::string & s_rep)
{
	this->_char_rep = s_rep[0];
	this->_int_rep = static_cast<int>(this->_char_rep);
	this->_double_rep = static_cast<double>(this->_char_rep);
	this->_float_rep = static_cast<float>(this->_char_rep);
}

void			Conversion::convert_from_int(std::string & s_rep)
{
	this->_int_rep = atoi(s_rep.c_str());
	this->_double_rep = static_cast<double>(this->_int_rep);
	this->_float_rep = static_cast<float>(this->_int_rep);
	this->_char_rep = static_cast<char>(this->_char_rep);
}

void			Conversion::convert_from_float(std::string & s_rep)
{
	this->_float_rep = std::atof(s_rep.c_str());
	this->_char_rep = static_cast<char>(this->_float_rep);
	this->_int_rep = static_cast<int>(this->_float_rep);
	this->_double_rep = static_cast<double>(this->_float_rep);
}

void			Conversion::convert_from_double(std::string & s_rep)
{
	this->_double_rep = strtod(s_rep.c_str(), NULL);
	this->_float_rep = static_cast<float>(this->_double_rep);
	this->_int_rep = static_cast<int>(this->_double_rep);
	this->_char_rep = static_cast<char>(this->_double_rep);
}

std::ostream&		operator<<(std::ostream & o, Conversion const & rhs)
{
	o << "char: " << rhs.get_char_rep() << std::endl;
	o << "int: " << rhs.get_int_rep() << std::endl;
	o << "float: " << rhs.get_float_rep() << std::endl;
	o << "double: " << rhs.get_double_rep() << std::endl;
	return (o);
}

