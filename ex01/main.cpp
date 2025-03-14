/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:30:44 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/14 15:20:45 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>
#include <cctype>
#include <limits>
#include <algorithm>

bool	contains_digit(const std::string &str)
{
	for (std::string::size_type i = 0; i < str.length(); i++)
	{
		if (std::isdigit(str[i]))
			return (true);
	}
	return (false);
}

bool	isfullnum(const std::string &str)
{
	for (std::string::size_type i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]) && str[i] != '-' && str[i] != ' ')
			return (false);
	}
	return (true);
}

// bool ew(const std::string &str)
// {
// 	size_t	space_nb;

// 	space_nb = 0;
// 	if (str.empty())
// 		return (false);
// 	for (size_t i = 0; i < str.length(); i++)
// 		if (std::isspace(str[i]))
// 			space_nb++;
// 	if (space_nb != str.length())
// 		return (true);
// 	else
// 		return (false);
// }

bool	only_spaces(const std::string &str)
{
	if (str.empty())
		return (false);
	return (std::all_of(str.begin(), str.end(), [](unsigned char c)
		{
			return (std::isspace(c));
		}));
}

std::string	trim_spaces(const std::string &str)
{
	size_t	first;
	size_t	last;

	first = str.find_first_not_of(' ');
	last = str.find_last_not_of(' ');
	if (first == std::string::npos)
		return ("");
	return (str.substr(first, (last - first) + 1));
}

std::string	one_space_rule(const std::string &str)
{
	std::string	fs;
	bool		prev_c_is_space;

	prev_c_is_space = false;
	for (std::string::size_type i = 0; i < str.length(); i++)
	{
		if (std::isspace(static_cast<unsigned char>(str[i])))
		{
			if (prev_c_is_space == false)
			{
				fs.push_back(' ');
				prev_c_is_space = true;
			}
		}
		else
		{
			fs.push_back(str[i]);
			prev_c_is_space = false;
		}
	}
}

bool	boss_getline(std::string &str)
{
	std::getline(std::cin, str);
	if (!std::cin)
	{
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cout << "^D";
			return (false);
		}
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		}
	}
	return (true);
}

int	addContact(PhoneBook &phonebook)
{
	
}

int	main(int ac, char **av)
{
	std::cout << "Choose an action : ADD | SEARCH | EXIT" << std::endl;

	
	return (0);
}