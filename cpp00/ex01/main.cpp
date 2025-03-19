/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:30:44 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/19 16:01:28 by pgrellie         ###   ########.fr       */
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
	if (str.empty())
		return (false);
	for (std::string::size_type i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]) && str[i] != '-' && str[i] != ' ')
		{
			std::cout << "Invalid input : Phone number should contain only digits."
					<< std::endl;
			return (false);
		}
	}
	return (true);
}

bool	only_spaces_emp(const std::string &str)
{
	if (str.empty())
		return (true);
	return (std::all_of(str.begin(), str.end(), [](unsigned char c)
		{
			return (std::isspace(c));
		}));
}

bool	isValidName(const std::string &str)
{
	return (!only_spaces_emp(str) && !contains_digit(str));
}

bool	isValidPhoneNumber(const std::string &str)
{
	return (!only_spaces_emp(str) && isfullnum(str));
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
	return (fs);
}

bool	boss_getline(std::string &str)
{
	if (!std::getline(std::cin, str))
	{
		if (std::cin.eof())
		{
			std::cout << "^D";
			return (false);
		}
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return (false);
	}
	str = trim_spaces(str);
	str = one_space_rule(str);
	return (true);
}

int	addContact(PhoneBook &phonebook)
{
	Contact		contact;
	std::string	input[5];

	if (std::cin.eof())
		return (1);
	std::cout << "First name : ";
	if (!boss_getline(input[0]) || !isValidName(input[0]))
		return (1);
	std::cout << "Last name : ";
	if (!boss_getline(input[1]) || !isValidName(input[1]))
		return (1);
	std::cout << "Nick name : ";
	if (!boss_getline(input[2]) || only_spaces_emp(input[2]))
		return (1);
	std::cout << "Phone number : ";
	if (!boss_getline(input[3]) || !isValidPhoneNumber(input[3]))
		return (1);
	std::cout << "Darkest secret : ";
	if (!boss_getline(input[4]) || only_spaces_emp(input[4]))
		return (1);

	contact.set_contact(input[0], input[1], input[2], input[3], input[4]);
	phonebook.add_contact(contact);
	return (0);
}

bool	handle_input_error(void)
{
	if (!std::cin)
	{
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cout << "\n^D\n";
			return (true);
		}
		else
		{
			std::cin.clear();
			std::cout << "An error occurred while reading your input. Please try again.\n";
		}
	}
	return (false);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;
	int			result;
	bool		continue_program;

	while (true)
	{
		std::cout << "Choose an action : ADD | SEARCH | EXIT" << std::endl;
		if (!std::getline(std::cin, command) || handle_input_error())
			break;
		if (command == "ADD")
		{
			result = addContact(phonebook);
			if (result == 1)
			{
				if (std::cin.eof())
					return (0);
				std::cout << "Failed to add contact. Please try again." << std::endl;
			}
		}
		else if (command == "SEARCH")
		{
			continue_program = phonebook.search_contact();
			if (!continue_program)
				return (0);
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command. Please try again." << std::endl;
	}
	return (0);
}
