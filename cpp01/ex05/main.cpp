/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:59:22 by mlebrun           #+#    #+#             */
/*   Updated: 2021/12/09 09:18:20 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main( int argc, char **argv )
{
	Karen			karen;
	std::string		level;

	(void)argc;
	(void)argv;
	std::cout << "Available levels: DEBUG, INFO, WARNING, ERROR (EXIT to leave)" << std::endl;
	do
	{
		std::cout << ">> ";
		std::getline(std::cin, level);
		if (level.compare("EXIT"))
		{
			karen.complain(level);
		}
	}
	while (level.compare("EXIT") != 0);
	std::cout << "Exited successfully" << std::endl;
	return (0);
}
