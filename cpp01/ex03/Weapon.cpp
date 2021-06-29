/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 13:57:13 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/29 14:17:17 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
}

std::string &Weapon::getType( void ) const
{
	std::string		&type_ref;

	type_ref = this->_type;
	return (type_ref);
}

void 	Weapon::setType(std::string type)
{
	this->_type = type;
}
