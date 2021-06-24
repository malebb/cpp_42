/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 13:59:01 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/24 17:16:29 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde( int n )
{
	this->_zombieHorde = new Zombie[n];

	this->_nb = n;
	std::srand(std::time(0));
	this->_names[0] = "tibo";
	this->_names[1] = "yves";
	this->_names[2] = "bastien";
	this->_names[3] = "tom";
	this->_names[4] = "elise";
	this->_names[5] = "lilou";
	this->_names[6] = "martin";
	this->_names[7] = "fabien";
	this->_names[8] = "fabrice";
	this->_names[9] = "emilien";
	for (int i = 0; i < this->nb; i++)
	{
		this->_zombieHorde[i].setName(this->_names[0 + ( std::rand() % ( 9 - 0 + 1 ) )]);
		new_zombie->announce();
	}
}


void	ZombieHorde::announce( void ) const
{
	for (int i = 0; i < this->_nb ; i++)
	{
		this->_zombieHorde[i].announce();
	}
}

