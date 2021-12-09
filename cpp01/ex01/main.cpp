/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 09:16:02 by mlebrun           #+#    #+#             */
/*   Updated: 2021/12/09 09:22:50 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie		zombie = Zombie();
	Zombie*		horde;
	int			N;

	N = 7;
	horde = zombie.zombieHorde(N, "lilou");
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
}
