/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:51:45 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/17 16:57:52 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent		event;
	Zombie			*gonzague;

	event.setZombieType("ice");
	gonzague = event.newZombie("gonzague");
	gonzague->announce();
}
