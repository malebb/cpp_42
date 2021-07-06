/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:01:04 by mlebrun           #+#    #+#             */
/*   Updated: 2021/07/06 11:28:59 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int argc, char **argv)
{
	std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Karen			karen;
	int				found;

	if (argc != 2)
		return (1);
	std::string 	level(argv[1]);
	found = 0;
	for (int i = 0; i < 4; i++)
	{
		if (!level.compare(levels[i]))
		{
			for (int j = i; j < 4; j++)
			{
				std::cout << "[" << levels[j] << "]" << std::endl;
				karen.complain(levels[j]);
				if (j != 3)
					std::cout << std::endl;
			}
			found = 1;
		}
	}
	if (!found)
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (0);
}
