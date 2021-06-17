/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:50:57 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/17 17:24:00 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
	public :
		ZombieEvent( void );
		void setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		Zombie*		randomChump( void ) const;
		
	private :
		std::string		_type;
};

#endif
