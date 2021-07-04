/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:59:52 by mlebrun           #+#    #+#             */
/*   Updated: 2021/07/04 12:31:29 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
/*
int	main(void)
{
	Weapon		w1 = Weapon("rifle");
	Weapon		w2 = Weapon("ak47");
	Weapon		w3 = Weapon("rocket launcher");

	HumanA ted =  HumanA("ted", w1);
	ted.attack();
	HumanB tibo = HumanB("tibo");
	tibo.attack();
	tibo.setWeapon(w3);
	tibo.attack();
	return (0);
}
*/
int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		std::cout << "addr = " << &club << std::endl;
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}
