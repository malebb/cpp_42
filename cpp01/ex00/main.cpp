/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 00:36:19 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/17 01:22:33 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack( void )
{
	Pony	my_pony = Pony("blue");

	my_pony.describe();
	my_pony.eat_apple();
	my_pony.describe();
	my_pony.fall();
}

void	ponyOnTheHeap( void )
{

	Pony	*my_pony = new Pony("green");

	my_pony->describe();
	my_pony->eat_apple();
	my_pony->eat_apple();
	my_pony->eat_apple();
	my_pony->eat_apple();
	my_pony->describe();
	my_pony->fall();
	delete my_pony;
}

int		main( void )
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return 0;
}
