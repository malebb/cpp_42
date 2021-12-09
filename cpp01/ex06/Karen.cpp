/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:13:53 by mlebrun           #+#    #+#             */
/*   Updated: 2021/12/09 09:11:08 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::complain( std::string level )
{
	std::string		levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void			(Karen::*msgs[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	int			pos;

	pos = 0;
	for (int i = 0; i < 4; i++)
	{
		if (!levels[i].compare(level))
			break;
		pos++;
	}
	switch (pos)
	{
		case 0:
			(this->*msgs[0])();
			(this->*msgs[1])();
			(this->*msgs[2])();
			(this->*msgs[3])();
			break;
		case 1:
			(this->*msgs[1])();
			(this->*msgs[2])();
			(this->*msgs[3])();
			break;
		case 2:
			(this->*msgs[2])();
			(this->*msgs[3])();
			break;
		case 3:
			(this->*msgs[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

	}
}

void	Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickel-special-ketchup burger." << std::endl << "I just love it!" << std::endl;
	std::cout << std::endl;
}

void	Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
}

void	Karen::error ( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std:: cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}
