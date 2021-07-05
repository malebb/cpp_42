/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:13:53 by mlebrun           #+#    #+#             */
/*   Updated: 2021/07/05 15:05:31 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

typedef	struct		s_msg
{
	
};

void	Karen::complain( std::string level )
{
	void (Karen::*FuncPtr) ( void );

	(void)level;
	FuncPtr = &Karen::level;
	for (int i = 0; i < 4; i++)
	{
		if ()
	}
	(this->*FuncPtr)();
}

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickel-special-ketchup burger. I just love it" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error ( void )
{
	std:: cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
