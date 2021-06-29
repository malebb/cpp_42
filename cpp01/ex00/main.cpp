/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:51:45 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/29 09:41:42 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie			zombie = Zombie("girafe");
	Zombie*			zombie_2;

	zombie.announce();
	zombie_2 = zombie.newZombie("ourson");
	zombie_2->announce();
 	zombie.randomChump("nastassia");
	zombie.zombieHorde(123);
	delete zombie_2;

}
