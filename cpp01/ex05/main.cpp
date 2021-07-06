/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:59:22 by mlebrun           #+#    #+#             */
/*   Updated: 2021/07/06 10:40:56 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main( void )
{
	Karen			karen;
	std::string		level;

	std::cout << "Available levels: DEBUG, INFO, WARNING, ERROR (EXIT to leave)" << std::endl;
	do
	{
		std::getline(std::cin, level);
		if (level.compare("EXIT"))
		{
			std::cout << ">>";
			karen.complain(level);
		}
	}
	while (level.compare("EXIT") != 0);
	std::cout << "Exited successfuly" << std::endl;
	return (0);
}
