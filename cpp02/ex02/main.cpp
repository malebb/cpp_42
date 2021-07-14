/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:08:59 by mlebrun           #+#    #+#             */
/*   Updated: 2021/07/14 16:39:07 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed			a(1);
	Fixed			b(2);
	Fixed			c(3);
	Fixed			d(3);
/*
	std::cout << std::endl;
	std::cout << "A is " << a << std::endl;
	std::cout << "B is " << b << std::endl;
	std::cout << "C is " << c << std::endl;
	std::cout << "D is " << d << std::endl;
	std::cout << std::endl;
	if (b > a)
		std::cout << "B is greater than A" << std::endl;
	if (a < b)
		std::cout << "A is less than B" << std::endl;
	if (a != b)
		std::cout << "A is not equal to B" << std::endl;
	if (c >= d)
		std::cout << "C is greater or equal to D" << std::endl;
	if (c <= d)
		std::cout << "C is less than or equal to D" << std::endl;
	if (c == d)
		std::cout << "C is equal to D" << std::endl;
	a = a + b;
	std::cout << "A is " << a << std::endl;
	a = a - b;
	std::cout << "A is " << a << std::endl;
	a = a * d;
	std::cout << "A is " << a << std::endl;
	a = a / d;
	std::cout << "A is " << a << std::endl;
	*/
	std::cout << "ICI: " << ++a << std::endl;
	std::cout << "A is " << a << std::endl;
	std::cout << std::endl;
	return (0);
}
