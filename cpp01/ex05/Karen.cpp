/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:13:53 by mlebrun           #+#    #+#             */
/*   Updated: 2021/12/09 09:15:11 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

typedef	struct		s_msg
{
	std::string		level;
	void (Karen::*level_function) (void);
}					t_msg;

void	Karen::complain( std::string level )
{
	t_msg		msgs[4] = {{"DEBUG", &Karen::debug}, {"INFO", &Karen::info}, {"WARNING", &Karen::warning}, {"ERROR", &Karen::error}};
	int			found;

	found = 0;
	for (int i = 0; i < 4; i++)
	{
		if (!msgs[i].level.compare(level))
		{
			(this->*(msgs[i].level_function))();
			found++;
			break;
		}
	}
	if (!found)
		std::cout << "Error: \"" << level << "\" level does not exist" << std::endl;
}

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickel-special-ketchup burger." << std::endl << "I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money." << std::endl << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error ( void )
{
	std:: cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
