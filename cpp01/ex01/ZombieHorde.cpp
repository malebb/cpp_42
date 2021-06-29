/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 09:29:21 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/29 09:41:40 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string name)
{
	this->name = name;	
}

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
	Zombie*		horde = new Zombie[n]
	
	for (int i = 0 ; i < n; i++)
	{
		horde[i].setName(name);
	}
	return (horde);
}
