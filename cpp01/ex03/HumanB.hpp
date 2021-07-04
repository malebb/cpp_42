/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:24:51 by mlebrun           #+#    #+#             */
/*   Updated: 2021/07/04 13:21:59 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class	HumanB
{
	public :
		HumanB(std::string name);
		void		attack( void );
		void		setWeapon(Weapon &weapon);

	private :
		std::string		_name;
		Weapon		*_weapon;
};

#endif
