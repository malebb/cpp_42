/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:50:08 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/29 09:26:26 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " died" << std::endl;
}

void	Zombie::announce( void ) const
{
	std::cout << "Say hi to "
		 << this->_name
		 << " : BraiiiiiiinnnzzzZ..."
		 << std::endl;
}

Zombie*		Zombie::newZombie(std::string name) const
{
	Zombie* new_zombie = new Zombie(name);
	return (new_zombie);
}

void		Zombie::randomChump(std::string name)
{
	Zombie *zombie = Zombie::newZombie(name);
	zombie->announce();
	delete zombie;
}
