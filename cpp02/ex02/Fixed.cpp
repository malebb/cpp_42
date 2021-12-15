/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:44:31 by mlebrun           #+#    #+#             */
/*   Updated: 2021/12/15 07:34:19 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int nb) : _fixed_point(nb * 256)
{
}

Fixed::Fixed(const float nb) : _fixed_point((int)roundf(nb * 256))
{
}

float			Fixed::toFloat( void ) const
{
	float		fixed_point;

	fixed_point = (float)this->_fixed_point;
	return (fixed_point / 256);
}

int				Fixed::toInt( void ) const
{
	return (this->_fixed_point / 256);
}

Fixed::Fixed( Fixed const & src )
{
	*this = src;
	return ;
}

Fixed&			Fixed::operator=( Fixed const & rhs )
{
	this->_fixed_point = rhs._fixed_point;
	return *this;
}

Fixed			Fixed::operator+( Fixed const & rhs )
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed			Fixed::operator-( Fixed const & rhs )
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed			Fixed::operator*( Fixed const & rhs )
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed			Fixed::operator/( Fixed const & rhs )
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed			Fixed::operator++( void )
{
	this->_fixed_point ++;
	return (*this);
}

Fixed			Fixed::operator++( int )
{
	Fixed		tmp;

	tmp = *this;
	++(*this);
	return (tmp);
}

Fixed			Fixed::operator--( void )
{
	this->_fixed_point--;
	return (*this);
}

Fixed			Fixed::operator--( int )
{
	Fixed		tmp;

	tmp = *this;
	--(*this);
	return (tmp);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}

int				Fixed::operator==(Fixed const & rhs ) const
{
	if (this->_fixed_point == rhs._fixed_point)
		return (1);
	return (0);
}

int				Fixed::operator!=(Fixed const & rhs ) const
{
	if (*this == rhs)
		return (0);
	return (1);
}


int				Fixed::operator>(Fixed const & rhs ) const
{
	if (this->_fixed_point > rhs._fixed_point)
		return (1);
	return (0);
}

int				Fixed::operator<(Fixed const & rhs ) const
{
	if (*this > rhs || *this == rhs)
		return (0);
	return (1);
}

int				Fixed::operator>=(Fixed const & rhs ) const
{
	if (*this < rhs)
		return (0);
	return (1);
}

int				Fixed::operator<=(Fixed const & rhs ) const
{
	if (*this > rhs)
		return (0);
	return (1);
}


int				Fixed::getRawBits( void ) const
{
	return (this->_fixed_point);
}

void			Fixed::setRawBits( int const raw )
{
	this->_fixed_point = raw;
}

Fixed&			Fixed::min(Fixed& fp1, Fixed& fp2)
{
	if (fp1 <= fp2)
		return (fp1);
	return (fp2);
}
Fixed const &	Fixed::min(const Fixed& fp1, const Fixed& fp2)
{
	if (fp1 <= fp2)
		return (fp1);
	return (fp2);
}

Fixed &			Fixed::max(Fixed& fp1, Fixed& fp2)
{
	if (fp1 >= fp2)
		return (fp1);
	return (fp2);
}

const Fixed &	Fixed::max(const Fixed &fp1, const Fixed &fp2)
{
	if (fp1 >= fp2)
		return (fp1);
	return (fp2);
}
