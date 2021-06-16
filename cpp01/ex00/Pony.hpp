/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 00:37:13 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/17 01:19:39 by mlebrun          ###   ########.fr       */
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
		std::string color;
		int			eaten_apple;
};

#endif
