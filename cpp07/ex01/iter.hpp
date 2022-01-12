/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 09:53:22 by mlebrun           #+#    #+#             */
/*   Updated: 2022/01/12 18:37:47 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	display(T & elem)
{
	std::cout << elem << std::endl;
}

template<typename T>
void	iter(T *array, int length, void(*f)(T&))
{
	for (int i = 0; i < length; i++)
	{
		(*f)(array[i]);
	}
}

#endif
