/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 00:37:13 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/17 13:46:10 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PONY_H
# define PONY_H

#include <string>
#include <iostream>

class Pony {

	public :
		Pony( std::string color );
		~Pony( void );
		void	describe( void ) const;
		void	eat_apple( void );
		void	fall();

	private :
		std::string _color;
		int			_eaten_apple;
};

#endif
