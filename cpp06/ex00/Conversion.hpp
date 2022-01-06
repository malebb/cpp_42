#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>

class Conversion
{
	public :
		Conversion();
		virtual ~Conversion();
		Conversion(Conversion const & src);
		Conversion&		operator=(Conversion const & rhs);
		Conversion(std::string & s_rep);
		char			get_char_rep(void) const;
		int				get_int_rep(void) const;
		float			get_float_rep(void) const;
		double			get_double_rep(void) const;
		bool			get_point(void) const;
		void			convert_from_char(std::string & s_rep);
		void			convert_from_int(std::string & s_rep);
		void			convert_from_float(std::string & s_rep);
		void			convert_from_double(std::string & s_rep);

	protected :
		char		_char_rep;
		int			_int_rep;
		float		_float_rep;
		double		_double_rep;
		bool		_point;
};

std::ostream&		operator<<(std::ostream & o, Conversion const & rhs);
#endif
