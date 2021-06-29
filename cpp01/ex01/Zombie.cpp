/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:50:08 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/29 11:30:42 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->_name = "unamed zombie";
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " died" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
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
	Zombie* new_zombie = new Zombie();
	new_zombie->setName(name);
	return (new_zombie);
}

void		Zombie::randomChump(std::string name)
{
	Zombie *zombie = Zombie::newZombie(name);
	zombie->announce();
	delete zombie;
}
