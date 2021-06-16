/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 19:22:51 by mlebrun           #+#    #+#             */
/*   Updated: 2021/06/16 19:26:00 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	display_col(std::string data)
{
	unsigned int		size_data;
	int		cut;

	size_data = data.size();
	cut = 0;
	if (size_data > 10)
	{
		size_data = 10;
		cut = 1;
	}
	for (unsigned int i = 0; i < 10 - size_data; i++)
	{
		std::cout << " ";
	}
	for (unsigned int j = 0; j < size_data; j++)
	{
			if (j == 9 && cut)
				std::cout << '.';
			else
				std::cout << data[j];
	}
	std::cout << "|";
}

int		is_number(std::string str)
{
	for (unsigned int i = 0; i < (unsigned int)str.length(); i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

void	add_contact(Contact member[8], unsigned int *added)
{
	std::string		data;

	std::cout << "First name :";
	std::getline(std::cin, data);
	member[*added].set_first_name(data);
	std::cout << "Last name :";
	std::getline(std::cin, data);
	member[*added].set_last_name(data);
	std::cout << "Nickname :";
	std::getline(std::cin, data);
	member[*added].set_nickname(data);
	std::cout << "Login :";
	std::getline(std::cin, data);
	member[*added].set_login(data);
	std::cout << "Postal address :";
	std::getline(std::cin, data);
	member[*added].set_postal_address(data);
	std::cout << "Email address :";
	std::getline(std::cin, data);
	member[*added].set_email_address(data);
	std::cout << "Phone number :";
	std::getline(std::cin, data);
	member[*added].set_phone_number(data);
	std::cout << "Birthday date :";
	std::getline(std::cin, data);
	member[*added].set_birthday_date(data);
	std::cout << "Favorite meal :";
	std::getline(std::cin, data);
	member[*added].set_favorite_meal(data);
	std::cout << "Underwear color :";
	std::getline(std::cin, data);
	member[*added].set_underwear_color(data);
	std::cout << "Darkest secret :";
	std::getline(std::cin, data);
	member[*added].set_darkest_secret(data);
	member[*added].set_index(*added + 1);
	*added = *added + 1;
	std::cout << "Contact added successfully" << std::endl;
}

void	search(Contact member[8], unsigned int added)
{
	unsigned int		index;
	std::string			data;

	std::cout << "|   index  |first name| last name|   login  |"
			  << std::endl;
	for (unsigned int j = 0; j < added; j++)
	{
		std::cout << "|";
		for (unsigned int i = 0; i < 9; i++)
		{
			std::cout << " ";
		}
		std::cout << member[j].get_index();
		std::cout << "|";
		display_col(member[j].get_first_name());
		display_col(member[j].get_last_name());
		display_col(member[j].get_login());
		std::cout << std::endl;
	}
	if (added != 0)
	{
		std::cout << "Enter an index for more detail: ";
		std::getline(std::cin, data);
		std::istringstream(data) >> index;
		while (!is_number(data) || index > added || index == 0)
		{
			std::cout << "Non-existant index, please try again: ";
			std::getline(std::cin, data);
			std::istringstream(data) >> index;
		}
		member[index - 1].display_detail();
	}
}

int		main(void)
{
	std::string		cmd;
	Contact			member[8];
	unsigned int	added;

	added = 0;
	std::cout << "#################### Welcome in the phonebook ! #####################"
			  << std::endl << std::endl;
	std::cout << "Available commands : ADD SEARCH or EXIT"
			  << std::endl << std::endl;
	do
	{
		std::cout << ">> ";

		std::getline(std::cin, cmd);
		if (!cmd.compare("ADD") && added == 8)
			std::cout << "Phonebook is full: you can either SEARCH or EXIT" 
					  << std::endl;
		else if (!cmd.compare("ADD"))
			add_contact(member, &added);
		else if (!cmd.compare("SEARCH"))
			search(member, added);
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "unknown command : " << cmd << std::endl;
	}
	while (cmd != "EXIT");
	std::cout << ">> Goodbye !" << std::endl;
	return (0);
}
