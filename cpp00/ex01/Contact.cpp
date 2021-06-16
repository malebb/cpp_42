/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:22:38 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/16 19:33:40 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {
	return ;
}

Contact::~Contact( void ) {
	return ;	
}

std::string	Contact::get_first_name( void ) const
{
	return this->_first_name;
}

void	Contact::set_first_name(std::string first_name)
{
	this->_first_name = first_name;
}

std::string	Contact::get_last_name( void ) const
{
	return this->_last_name;
}

void	Contact::set_last_name(std::string last_name)
{
	this->_last_name = last_name;
}

std::string	Contact::get_nickname( void ) const
{
	return this->_nickname;
}

void	Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

std::string	Contact::get_login( void ) const
{
	return this->_login;
}

void	Contact::set_login(std::string login)
{
	this->_login = login;
}

std::string	Contact::get_postal_address( void ) const
{
	return this->_postal_address;
}

void	Contact::set_postal_address(std::string postal_address)
{
	this->_postal_address = postal_address;
}

std::string	Contact::get_email_address( void ) const
{
	return this->_email_address;
}

void	Contact::set_email_address(std::string email_address)
{
	this->_email_address = email_address;
}

std::string	Contact::get_phone_number( void ) const
{
	return this->_phone_number;
}

void	Contact::set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
}

std::string	Contact::get_birthday_date( void ) const
{
	return this->_birthday_date;
}

void	Contact::set_birthday_date(std::string birthday_date)
{
	this->_birthday_date = birthday_date;
}

std::string	Contact::get_favorite_meal( void ) const
{
	return this->_favorite_meal;
}

void	Contact::set_favorite_meal(std::string favorite_meal)
{
	this->_favorite_meal = favorite_meal;
}

std::string	Contact::get_underwear_color( void ) const
{
	return this->_underwear_color;
}

void	Contact::set_underwear_color(std::string underwear_color)
{
	this->_underwear_color = underwear_color;
}

std::string	Contact::get_darkest_secret( void ) const
{
	return this->_darkest_secret;
}

void	Contact::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

int		Contact::get_index( void ) const
{
	return this->_index;
}

void	Contact::set_index(int index)
{
	this->_index = index;
}

void	Contact::display_detail(void) const
{
	std::cout << "First name       :  " << this->_first_name << std::endl;
	std::cout << "Last name        :  " << this->_last_name << std::endl;
	std::cout << "Nickname         :  " << this->_nickname << std::endl;
	std::cout << "Login            :  " << this->_login << std::endl;
	std::cout << "Postal address   :  " << this->_postal_address << std::endl;
	std::cout << "Email address    :  " << this->_email_address << std::endl;
	std::cout << "Phone number     :  " << this->_phone_number << std::endl;
	std::cout << "Birthday date    :  " << this->_birthday_date << std::endl;
	std::cout << "Favorite meal    :  " << this->_favorite_meal << std::endl;
	std::cout << "Underwear color  :  " << this->_underwear_color << std::endl;
	std::cout << "Darkest secret   :  " << this->_darkest_secret << std::endl;
}
