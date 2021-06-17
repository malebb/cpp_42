/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:50:48 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/17 17:22:46 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void )
{
	this->_type = "classic";
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie* new_zombie = new Zombie(this->_type);

	new_zombie->setName(name);
	return (new_zombie);	
}

Zombie*		randomChump( void ) const
{
	Zombie* new_zombie = new Zombie(this->_type);
	new_zombie.setName(this->names[25 + ( std::rand() % ( 63 - 25 + 1 ) )];
}

