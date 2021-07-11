/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:42:39 by mlebrun           #+#    #+#             */
/*   Updated: 2021/07/11 13:20:45 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	public :
		Fixed();
		Fixed( Fixed const & src );
		Fixed(const float nb);
		Fixed(const int nb);
		Fixed&	operator=( Fixed const & rhs);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		~Fixed();

	private :
		int					_fixed_point;
		static const int	_fract_bit_nb = 8;
};
std::ostream & operator<<( std::ostream & o, Fixed const & rhs );
