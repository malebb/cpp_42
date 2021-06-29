/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 14:48:31 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/29 11:21:05 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*		Zombie::newZombie(std::string name) const
{
	Zombie* new_zombie = new Zombie();
	new_zombie->setName(name);
	return (new_zombie);
}

