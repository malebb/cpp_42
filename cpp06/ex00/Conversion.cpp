#include "Conversion.hpp"

Conversion::Conversion() : _char_rep('0'), _int_rep(0), _float_rep(0),
			_double_rep(0), _nan(false), _minus_inf(false), _plus_inf(false),
			_error(false), _char_overflow(false), _int_overflow(false),
			_float_overflow(false)

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
		if ((!(s_rep[i] >= '0' && s_rep[i] <= '9') && s_rep[i] != '-')
				|| (s_rep[i] == '-' && i != 0))
			return (false);
	}
	return (true);
}

Conversion::Conversion(std::string & s_rep) : _nan(false),
			_minus_inf(false), _plus_inf(false), _error(false),
			_char_overflow(false), _int_overflow(false),
			_float_overflow(false)
{
	if (s_rep.compare("-inff") == 0 || s_rep.compare("-inf") == 0)
		this->_minus_inf = true;
	else if (s_rep.compare("+inff") == 0 || s_rep.compare("+inf") == 0)
		this->_plus_inf = true;
	else if (s_rep.compare("nanf") == 0 || s_rep.compare("nan") == 0)
		this->_nan = true;
	else if (is_number(s_rep))
		this->convert_from_int(s_rep);
	else if (s_rep.length() == 1 && !(s_rep[0] >= '0' && s_rep[0] <= '9'))
		this->convert_from_char(s_rep);
	else if (s_rep.find(".") != std::string::npos &&
			s_rep.find("f") != std::string::npos)
		this->convert_from_float(s_rep);
	else if (s_rep.find(".") != std::string::npos)
		this->convert_from_double(s_rep);
	else
		this->_error = true;
}

Conversion&		Conversion::operator=(Conversion const & rhs)
{
	this->_char_rep = rhs._char_rep;
	this->_int_rep = rhs._int_rep;
	this->_float_rep = rhs._float_rep;
	this->_double_rep = rhs._double_rep;
	this->_nan = rhs._nan;
	this->_minus_inf = rhs._minus_inf;
	this->_plus_inf = rhs._plus_inf;
	this->_error = rhs._error;
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

bool			Conversion::get_minus_inf(void) const
{
	return (this->_minus_inf);
}

bool			Conversion::get_plus_inf(void) const
{
	return (this->_plus_inf);
}

bool			Conversion::get_nan(void) const
{
	return (this->_nan);
}

bool			Conversion::get_error(void) const
{
	return (this->_error);
}

bool			Conversion::get_char_overflow(void) const
{
	return (this->_char_overflow);
}

bool			Conversion::get_int_overflow(void) const
{
	return (this->_int_overflow);
}

bool			Conversion::get_float_overflow(void) const
{
	return (this->_float_overflow);
}

void			Conversion::check_overflow(std::string & s_rep)
{
	double		nb;

	nb = strtod(s_rep.c_str(), NULL);
	if (errno == 0)
	{
		if (nb < INT_MIN || nb > INT_MAX)
			this->_int_overflow = true;
		if (nb < CHAR_MIN || nb > CHAR_MAX)
			this->_char_overflow = true;
		if (nb <= std::numeric_limits<float>::max() * -1  || nb > FLT_MAX)
			this->_float_overflow = true;
	}
}

void			Conversion::convert_from_char(std::string & s_rep)
{
	this->check_overflow(s_rep);
	this->_char_rep = s_rep[0];
	this->_int_rep = static_cast<int>(this->_char_rep);
	this->_double_rep = static_cast<double>(this->_char_rep);
	this->_float_rep = static_cast<float>(this->_char_rep);
}

void			Conversion::convert_from_int(std::string & s_rep)
{
	long int		nb;

	this->check_overflow(s_rep);
	nb = atol(s_rep.c_str());
	if (nb < INT_MIN || nb > INT_MAX)
		this->_error = true;
	else
	{
		this->_int_rep = atoi(s_rep.c_str());
		this->_double_rep = static_cast<double>(this->_int_rep);
		this->_float_rep = static_cast<float>(this->_int_rep);
		this->_char_rep = static_cast<char>(this->_int_rep);
	}
}

void			Conversion::convert_from_float(std::string & s_rep)
{
	this->check_overflow(s_rep);
	this->_float_rep = strtof(s_rep.c_str(), NULL);
	if (errno != 0)
		this->_error = true;
	else
	{
		this->_char_rep = static_cast<char>(this->_float_rep);
		this->_int_rep = static_cast<int>(this->_float_rep);
		this->_double_rep = static_cast<double>(this->_float_rep);
	}
}

void			Conversion::convert_from_double(std::string & s_rep)
{
	this->check_overflow(s_rep);
	this->_double_rep = strtod(s_rep.c_str(), NULL);
	if (errno != 0)
		this->_error = true;
	else
	{
		this->_float_rep = static_cast<float>(this->_double_rep);
		this->_int_rep = static_cast<int>(this->_double_rep);
		this->_char_rep = static_cast<char>(this->_double_rep);
	}
}

static void			print_double(std::ostream & o,
			Conversion const & rhs)
{
	o << "double: ";
	if (rhs.get_error())
		o << "impossible" << std::endl;
	else if (rhs.get_minus_inf())
		o << "-inf" << std::endl;
	else if (rhs.get_plus_inf())
		o << "+inf" << std::endl;
	else if (rhs.get_nan())
		o << "nan" << std::endl;
	else
	{
		o << rhs.get_double_rep();
		if (rhs.get_double_rep() == static_cast<int>(rhs.get_double_rep()))
			o << ".0";
		o << std::endl;
	}
}

static void			print_float(std::ostream & o,
			Conversion const & rhs)
{
	o << "float: ";
	if (rhs.get_error() || rhs.get_float_overflow())
		o << "impossible" << std::endl;
	else if (rhs.get_minus_inf())
		o << "-inff" << std::endl;
	else if (rhs.get_plus_inf())
		o << "+inff" << std::endl;
	else if (rhs.get_nan())
		o << "nanf" << std::endl;
	else
	{
   		o << rhs.get_float_rep();
		if (rhs.get_double_rep() == static_cast<int>(rhs.get_double_rep()))
			o << ".0";
		o << "f" << std::endl;
	}
}

std::ostream&		operator<<(std::ostream & o, Conversion const & rhs)
{
	o << "char: ";
	if (rhs.get_minus_inf() || rhs.get_plus_inf() || rhs.get_nan()
			|| rhs.get_error() || rhs.get_char_overflow())
		o << "impossible" << std::endl;
	else if (std::isprint(static_cast<int>(rhs.get_char_rep())))
		o << rhs.get_char_rep() << std::endl;
	else
		o << "Non displayable" << std::endl;
	o << "int: ";
	if (rhs.get_minus_inf() || rhs.get_plus_inf() || rhs.get_nan() 
			|| rhs.get_error() || rhs.get_int_overflow())
		o << "impossible" << std::endl;
	else
		o << rhs.get_int_rep() << std::endl;
	print_float(o, rhs);
	print_double(o, rhs);
	return (o);
}

