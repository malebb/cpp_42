/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:42:39 by mlebrun           #+#    #+#             */
/*   Updated: 2021/07/10 17:08:18 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	public :
		Fixed();
		Fixed( Fixed const & src );
		Fixed&	operator=( Fixed const & rhs);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		~Fixed();

	private :
		int					_fixed_point;
		static const int	_fract_bit_nb = 8;
};
