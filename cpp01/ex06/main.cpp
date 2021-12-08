/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:01:04 by mlebrun           #+#    #+#             */
/*   Updated: 2021/12/08 15:36:24 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int argc, char **argv)
{
	std::string		level;
	std::string		log_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	unsigned int	i;

	if (argc != 2)
		std::cout << "error: only expect one log level" << std::endl;

	//	std::cout << "Error: only expect one of these log level: DEGUB INFO WARNING ERROR\n";
	level = argv[1];
	getline(std::cin, level);
	switch (level)
	{
		case "DEBUG": 
			i = 0;
			break ;
		case "INFO":
			i = 1;
			break ;
		case "WARNING":
			i = 2;
			break ;
		case "ERROR":
			i = 3;
			break ;
	}
	std::cout << "result = " << level << std::endl;
	return (0);
}
