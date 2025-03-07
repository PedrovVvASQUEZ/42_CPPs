/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:53:59 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/07 17:57:51 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : list_size(0), oldest_index(0)
{
	std::cout << "constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "destructor called" << std::endl;
	return ;
}

void	PhoneBook::addContact(const Contact &new_contact)
{
	list[oldest_index] = new_contact;
	oldest_index = (oldest_index + 1) % 8;
	if (list_size < 8)
		list_size++;
}

bool	PhoneBook::searchContact(void) const
{
	std::string	input;
	bool		isdigit;

	isdigit = true;
	for (int i = 0; i < list_size; i++)
		list[i].display_header(i + 1);
	std::cout << "Enter the index of the wanted contact: ";
	std::cin >> input;
	std::cout << "You entered index: "<< input << std::endl;
	if (!std::cin || input.length() > 512)
	{
		std::cout << "It seems an error as occured. Please try again." << std::endl;
		return (false);
	}
	for (std::string::size_type i = 0; i < input.length(); i++)
	{
		if ()
	}
}
