/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:08:59 by mlebrun           #+#    #+#             */
/*   Updated: 2021/12/13 13:40:41 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed b;

	a.setRawBits(8);
	b.setRawBits(7);
	if (a <= b)
	{
		std::cout << "OUI" << std::endl;
	}
//	std::cout << "before" << a++ << std::endl;
//	std::cout << "after" << a << std::endl;
//	std::cout << "before" << a-- << std::endl;
//	std::cout << "after" << a << std::endl;
//	std::cout << a++ << std::endl;
//	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
