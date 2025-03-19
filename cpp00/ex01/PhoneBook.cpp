/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:53:59 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/12 17:55:35 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void) : list_size(0), oldest_index(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::add_contact(const Contact &new_contact)
{
	list[oldest_index] = new_contact;
	oldest_index = (oldest_index + 1) % 8;
	if (list_size < 8)
		list_size++;
}

bool	PhoneBook::search_contact(void) const
{
	std::string	input;
	bool		is_digit;
	int			index;

	is_digit = true;
	for (int i = 0; i < list_size; i++)
		list[i].display_format(i + 1);
	std::cout << "Enter the index of the wanted contact: ";
	std::getline(std::cin, input);
	std::cout << "You entered index: "<< input << std::endl;
	if (!std::cin)
	{
		if (std::cin.eof())
		{
			std::cin.clear();
			std::cout << "^D\n";
			return (false);
		}
	}
	for (std::string::size_type i = 0; i < input.length(); i++)
	{
		if (!std::isdigit(input[i]))
		{
			is_digit = false;
			return (true);
		}
	}
	if (is_digit)
	{
		index = std::atoi(input.c_str());
		if (index < 1 || index > list_size)
		{
			std::cout << "Invalid index" << std::endl;
			return (true);
		}
		else
		{
			list[index - 1].display_contact();
			return (true);
		}
	}
	else
		std::cout << "Invalid index" << std::endl;
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	return (true);
}
