/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 13:57:07 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/24 17:16:27 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
	public :
		ZombieHorde(int n);
		void	announce( void ) const;

	private :
		int				_nb;
		std::string		_names[10];
		Zombie*			_zombieHorde;
};

#endif
