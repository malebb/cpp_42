/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlebrun <mlebrun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 13:28:37 by mlebrun           #+#    #+#             */
/*   Updated: 2021/12/08 11:15:17 by mlebrun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::ifstream	ifs(argv[1]);
	std::string		replace_file(argv[1]);
	replace_file += ".replace";
	std::ofstream	ofs(replace_file.c_str());
	std::string		file;

	if (!ifs)
		std::cout << "Error, \"" << argv[1] << "\" does not exist" << std::endl;
	if (argc != 4)
	{
		std::cout << "Error arguments, expected :  FILENAME STRING1 STRING2" << std::endl;
		return (1);
	}

	std::string		str1(argv[2]);
	std::string		str2(argv[3]);

	if (str1.empty())
	{
		std::cout << "Error arguments, strings should not be empty" << std::endl;
		return (1);
	}

	std::string		line;

	while (getline(ifs, line))
	{
		file += line;
		file += "\n";
	}

	ifs.close();

	const unsigned int	size_str1 = str1.length();
	const unsigned int	size_str2 = str2.length();

	for (unsigned int i = 0; i < (unsigned int)file.length(); i++)
	{
		if (!file.compare(i, size_str1, str1))
		{
			file.erase(i, size_str1);
			file.insert(i, str2);
			i += size_str2 - 1;
		}
	}
	ofs << file;
	ofs.close();
	return (0);
}
