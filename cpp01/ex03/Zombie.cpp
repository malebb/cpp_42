/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:50:08 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/24 17:16:31 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce( void ) const
{
	std::cout << "Say hi to "
		 << this->_name
		 << " he's a zombie of type "
		 << this->_type
		 << " : Braiiiiiiinnnssss ..."
		 << std::endl;
}
