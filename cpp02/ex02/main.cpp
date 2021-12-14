/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:08:59 by mlebrun           #+#    #+#             */
/*   Updated: 2021/12/14 13:55:03 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{

	Fixed nb;
	Fixed nb2;
	Fixed nb3;
	Fixed c;
	Fixed g;
	Fixed h;
	Fixed i;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	nb.setRawBits(5);
	nb2.setRawBits(10);
	nb3.setRawBits(10);

	std::cout << "nb = " << nb.getRawBits() << std::endl;
	std::cout << "nb2 = " << nb2.getRawBits() << std::endl;
	std::cout << "nb3 = " << nb3.getRawBits() << std::endl;
	if (nb <= nb2)
	{
		std::cout << "nb is less or equal to nb2" << std::endl;
	}
	if (nb < nb2)
		std::cout << "nb is less than nb2" << std::endl;
	if (nb2 >= nb3)
		std::cout << "nb2 is greater or equal to nb3" << std::endl;
	if (nb2 > nb)
		std::cout << "nb2 is greater than nb" << std::endl;
	if (nb2 == nb3)
		std::cout << "nb2 is equal to nb3" << std::endl;
	if (nb != nb3)
		std::cout << "nb is not equal to nb3" << std::endl;

	std::cout << std::endl;

	g = Fixed(10);
	h = Fixed(20);
	std::cout << "fixed point 1) = " << g.getRawBits() << std::endl;
	std::cout << "fixed point 2) = " << h.getRawBits() << std::endl;
	i = Fixed::min(g, h);
	std::cout << "Smallest fixed point = " << i.getRawBits() << std::endl;
	i = Fixed::max(g, h);
	std::cout << "Greatest fixed point = " << i.getRawBits() << std::endl;
	return 0;
}
