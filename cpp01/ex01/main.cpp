/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 09:16:02 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/29 09:27:33 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie		zombie = Zombie("tibo");
	Zombie*		horde;

	horde = zombie.zombieHorde(23, "lilou");
}
