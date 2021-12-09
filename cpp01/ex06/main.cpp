/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:01:04 by mlebrun           #+#    #+#             */
/*   Updated: 2021/12/09 07:44:21 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int argc, char **argv)
{
	Karen		karen;

	if (argc != 2)
	{
		std::cout << "error: only expect one log level" << std::endl;
		return (1);
	}
	karen.complain(argv[1]);
	return (0);
}
