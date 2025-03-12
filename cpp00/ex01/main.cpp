/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:30:44 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/12 17:58:53 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>
#include <cctype>
#include <limits>

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

std::string	str_format(const std::string &str)
{
	size_t	first;
	size_t	last;
	
}

int	main(int ac, char **av)
{
	
	return (0);
}