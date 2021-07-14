/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 14:44:31 by mlebrun           #+#    #+#             */
/*   Updated: 2021/07/14 16:45:10 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int nb) : _fixed_point(nb * 256)
{

	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb) : _fixed_point((int)std::roundf(nb * 256))
{
	std::cout << "Float constructor called" << std::endl;
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
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed&		Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
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

Fixed&		Fixed::operator++( void )
{
	int		fp;

	std::cout << "NON" << std::endl;
	fp = this->toInt();
	fp++;
	fp *= 256;
	this->_fixed_point = fp;
	std::cout << "POIS: " << *this << std::endl;
	return *this;
}

Fixed		Fixed::operator++( int )
{
	Fixed		tmp;
	int			fp;

	std::cout << "OUI" << std::endl;
	tmp = *this;
	fp = this->toInt();
	//++fp;
	//fp *= 256;
	//this->_fixed_point = fp;
	this->_fixed_point = fp;
	(++(*this)) * 256;
	return *this;
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
	std::cout << "getRawbits member function called" << std::endl;
	return (this->_fixed_point);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixed_point = raw;
}
