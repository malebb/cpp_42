/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:59:52 by mlebrun           #+#    #+#             */
/*   Updated: 2021/07/02 11:15:29 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

int	main(void)
{
	Weapon		w1 = Weapon("rifle");
	Weapon		w2 = Weapon("rifle");

	HumanA ted =  HumanA("ted", w1);
	ted.attack();
	return (0);
}
