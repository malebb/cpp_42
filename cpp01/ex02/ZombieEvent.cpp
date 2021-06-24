/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:50:48 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/18 16:27:02 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void )
{
	std::srand(std::time(0));
	this->_type = "classic";
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
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*		ZombieEvent::newZombie(std::string name) const
{
	Zombie* new_zombie = new Zombie(name, this->_type);
	return (new_zombie);
}

Zombie*		ZombieEvent::randomChump( void ) const
{
	Zombie* new_zombie = ZombieEvent::newZombie(this->_names[0 + ( std::rand() % ( 9 - 0 + 1 ) )]);
	new_zombie->announce();
	return (new_zombie);
}

