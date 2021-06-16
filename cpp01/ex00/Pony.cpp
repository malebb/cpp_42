/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 00:44:10 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/17 01:23:39 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string color)
{
	this->color = color;
	this->eaten_apple = 0;
	std::cout << "A new pony is born, so cute"
			  << std::endl;
}

Pony::~Pony( void )
{
	std::cout << "Pony is dead, pretty sad"
		  	  << std::endl;
	return ;
}

void	Pony::describe( void ) const
{
	std::cout << "Loke over there! You can see a sumptuous "
			  << this->color
			  << " pony"
			  << std::endl;
	std::cout << "He has eaten " 
			  << this->eaten_apple 
			  << " apple"
			  << std::endl;
}

void	Pony::eat_apple( void )
{
	std::cout << "*crunch*"
		 << std::endl;
	this->eaten_apple++;
}

void	Pony::fall( void )
{
	std::cout << "*BOOM*, ouch pony has fallen :("
		 << std::endl;
	this->eaten_apple++;
}
