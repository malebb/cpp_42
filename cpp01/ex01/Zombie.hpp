/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:50:14 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/29 09:41:38 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{

	public :
		Zombie (std::string name);
		~Zombie ( void );
		void	announce( void ) const;
		Zombie* newZombie(std::string name) const ;
		void	randomChump( std::string name ) ;
		Zombie*	zombieHorde( int N, std::string name );
		void	setName(std::string name);

	private :
		std::string		_name;
		
};

#endif
