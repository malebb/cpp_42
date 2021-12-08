/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:46:02 by mlebrun           #+#    #+#             */
/*   Updated: 2021/12/08 08:39:24 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main( void )
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "Address string: " << &str << std::endl;
	std::cout << "Address pointer: " << stringPTR << std::endl;
	std::cout << "Address reference: " << &stringREF << std::endl;
	std::cout << "String pointer: " << *stringPTR << std::endl;
	std::cout << "String reference: " << stringREF << std::endl;
	return (0);
}
