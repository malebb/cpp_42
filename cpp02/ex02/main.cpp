/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:08:59 by mlebrun           #+#    #+#             */
/*   Updated: 2021/12/14 09:01:14 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b;
	Fixed c;
	Fixed d;
	Fixed e;
	Fixed f;
	Fixed g;
	Fixed h;
	Fixed i;

	a.setRawBits(5);
	b.setRawBits(10);
	c.setRawBits(10);

	std::cout << "a = " << a.getRawBits() << std::endl;
	std::cout << "b = " << b.getRawBits() << std::endl;
	std::cout << "c = " << c.getRawBits() << std::endl;
	if (a <= b)
	{
		std::cout << "a is less or equal to b" << std::endl;
	}
	if (a < b)
		std::cout << "a is less than b" << std::endl;
	if (b >= c)
		std::cout << "b is greater or equal to c" << std::endl;
	if (b > a)
		std::cout << "b is greater than a" << std::endl;
	if (b == c)
		std::cout << "b is equal to c" << std::endl;
	if (a != c)
		std::cout << "a is not equal to c" << std::endl;

	std::cout << std::endl;

	d.setRawBits(20);
	e.setRawBits(4);
	std::cout << "d = " << d.getRawBits() << std::endl;
	std::cout << "e = " << e.getRawBits() << std::endl;
	f = d + e;
	std::cout << "f = d + e = " << f.getRawBits() << std::endl;
	f = d - e;
	std::cout << "f = d - e = " << f.getRawBits() << std::endl;
	f = e * d;
	std::cout << "f = e * d = " << f.getRawBits() << std::endl;
	f = d / e;
	std::cout << "f = d / e = " << f.getRawBits() << std::endl;

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
