/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 13:50:14 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/18 16:37:29 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{

	public :
		Zombie (std::string name, std::string type);
		void	announce( void ) const;
		void	setName(std::string name);

	private :
		std::string		_name;
		std::string		_type;
};

#endif
