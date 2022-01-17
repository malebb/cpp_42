#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include <limits.h>
# include <limits>
# include <float.h>
# include <errno.h>
# include <sstream>


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
		bool			get_nan(void) const;
		bool			get_minus_inf(void) const;
		bool			get_plus_inf(void) const;
		bool			get_inf(void) const;
		bool			get_error(void) const;
		bool			get_char_overflow(void) const;
		bool			get_int_overflow(void) const;
		bool			get_float_overflow(void) const;
		void			convert_from_char(std::string & s_rep);
		void			convert_from_int(std::string & s_rep);
		void			convert_from_float(std::string & s_rep);
		void			convert_from_double(std::string & s_rep);
		void			check_overflow(std::string & s_rep);

	protected :
		char		_char_rep;
		int			_int_rep;
		float		_float_rep;
		double		_double_rep;
		bool		_nan;
		bool		_minus_inf;
		bool		_plus_inf;
		bool		_inf;
		bool		_error;
		bool		_char_overflow;
		bool		_int_overflow;
		bool		_float_overflow;
};

std::ostream&		operator<<(std::ostream & o, Conversion const & rhs);
#endif
