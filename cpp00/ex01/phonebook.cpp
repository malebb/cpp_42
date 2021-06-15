#include <iostream>
#include "Contact.class.hpp"

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



int	main(void)
{
	std::string		cmd;
	std::string		data;
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
		if (!cmd.compare("ADD") && added == 7)
			std::cout << "Phonebook is full: you can either SEARCH or EXIT" 
					  << std::endl;
		else if (!cmd.compare("ADD"))
		{
			std::cout << ">> first name :";
			std::getline(std::cin, data);
			member[added].set_first_name(data);
			added++;
		}
		else if (!cmd.compare("SEARCH"))
		{
			for (unsigned int j = 0; j < added; j++)
			{
				std::cout << "|";
				for (unsigned int i = 0; i < 9; i++)
				{
					std::cout << " ";
				}
				std::cout << j;
				std::cout << "|";
				display_col(member[j].get_first_name());
				std::cout << std::endl;
			}
		}
		else if (cmd == "EXIT")
			break ;
		else
		{
			std::cout << "unknown command (" << cmd << ") : you can only use ADD SEARCH OR EXIT" << std::endl;
		}
	}
	while (cmd != "EXIT");
	std::cout << ">> Goodbye!" << std::endl;
	std::cout << member[0].get_first_name();
	return (0);
}
