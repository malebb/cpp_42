/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:44:31 by mlebrun           #+#    #+#             */
/*   Updated: 2021/07/15 15:02:02 by mlebrun          ###   ########.fr       */
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

Fixed::Fixed(const float nb) : _fixed_point((int)std::roundf(nb * 256))
{
}

float	Fixed::toFloat( void ) const
{
	float		fixed_point;

	fixed_point = (float)this->_fixed_point;
	return ((float)(fixed_point / 256));
}

int		Fixed::toInt( void ) const
{
	return ((int)this->_fixed_point / 256);
}

Fixed::Fixed( Fixed const & src )
{
	*this = src;
	return ;
}

Fixed&		Fixed::operator=( Fixed const & rhs )
{
	this->_fixed_point = rhs._fixed_point;
	return *this;
}

Fixed&		Fixed::operator+( Fixed const & rhs )
{
	this->_fixed_point = this->_fixed_point + rhs._fixed_point;
	return *this;
}

Fixed&		Fixed::operator-( Fixed const & rhs )
{
	this->_fixed_point = this->_fixed_point - rhs._fixed_point;
	return *this;
}

Fixed&		Fixed::operator*( Fixed const & rhs )
{
	this->_fixed_point /= 256;
	this->_fixed_point = (this->_fixed_point * rhs._fixed_point);
	return *this;
}

Fixed&		Fixed::operator/( Fixed const & rhs )
{
	this->_fixed_point *= 256;
	this->_fixed_point = (this->_fixed_point / rhs._fixed_point);
	return *this;
}

Fixed		Fixed::operator++( void )
{
	float		fp;
	fp = (1/256);

	std::cout << "FP = " << fp << std::endl;
	fp = this->toFloat();
//	this->_fixed_point = this->toInt();
//	this->_fixed_point+=;
	fp += 0.0390625;
	this->_fixed_point = (fp * 256);
	std::cout << "DEBUG" << this->toFloat() << std::endl;
	return (*this);
}

Fixed		Fixed::operator++( int )
{
	Fixed		tmp;

	tmp._fixed_point = this->_fixed_point;
	this->_fixed_point = this->toInt();
	this->_fixed_point++;
	this->_fixed_point *= 256;
	return (tmp);
}

Fixed		Fixed::operator--( void )
{
	this->_fixed_point = this->toInt();
	this->_fixed_point--;
	this->_fixed_point *= 256;
	return (*this);
}

Fixed		Fixed::operator--( int )
{
	Fixed		tmp;

	tmp._fixed_point = this->_fixed_point;
	this->_fixed_point = this->toInt();
	this->_fixed_point--;
	this->_fixed_point *= 256;
	return (tmp);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}

int	Fixed::operator>(Fixed const & rhs ) const
{
	if (this->_fixed_point > rhs._fixed_point)
		return (1);
	return (0);
}

int	Fixed::operator<(Fixed const & rhs ) const
{
	if (this->_fixed_point < rhs._fixed_point)
		return (1);
	return (0);
}

int	Fixed::operator>=(Fixed const & rhs ) const
{
	if (this->_fixed_point >= rhs._fixed_point)
		return (1);
	return (0);
}

int	Fixed::operator<=(Fixed const & rhs ) const
{
	if (this->_fixed_point <= rhs._fixed_point)
		return (1);
	return (0);
}

int	Fixed::operator==(Fixed const & rhs ) const
{
	if (this->_fixed_point == rhs._fixed_point)
		return (1);
	return (0);
}

int	Fixed::operator!=(Fixed const & rhs ) const
{
	if (this->_fixed_point != rhs._fixed_point)
		return (1);
	return (0);
}

int		Fixed::getRawBits( void ) const
{
	return (this->_fixed_point);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixed_point = raw;
}
