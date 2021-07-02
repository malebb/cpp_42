/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 10:24:51 by mlebrun           #+#    #+#             */
/*   Updated: 2021/07/02 14:54:00 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class	HumanA
{
	public :
		HumanA(std::string name, Weapon &weapon);
		void		attack( void );

	private :
		std::string		_name;
		Weapon			_weapon;

};

#endif
