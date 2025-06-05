/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:55:13 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/30 14:31:54 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScarlarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "error: bad arguments" << std::endl;
		return (1);
	}
	ScarlarConverter::convert(av[1]);
	return (0);
}