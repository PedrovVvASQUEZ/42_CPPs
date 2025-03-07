/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 15:08:26 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/05 15:23:27 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

std::string	toUpper(const std::string &input)
{
	std::string	result = input;

	for (std::string::size_type i = 0; i < result.length(); i++)
	{
		result[i] = std::toupper(result[i]);
	}
	return (result);
}

int	main(int ac, char **av)
{
	if (ac <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string	str = toUpper(av[i]);
			std::cout << str;
			// if (i < ac - 1)
			// 	std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}