/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:51:45 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/24 14:28:04 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent		event;
	Zombie			gonzague = Zombie("gonzague", "plant");
	Zombie*			random_zombie;
	Zombie*			random_zombie_2;

	//Tests class Zombie
	event.setZombieType("ice");
	gonzague.announce();

	//Tests class ZombieEvent
	
	random_zombie = event.randomChump();
	delete random_zombie;
	event.setZombieType("fire");
	random_zombie_2 = event.randomChump();
	delete random_zombie_2;
}
