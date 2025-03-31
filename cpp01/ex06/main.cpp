/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:30:31 by codespace         #+#    #+#             */
/*   Updated: 2025/03/31 15:36:36 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl		harl;
	std::string	level;
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			log;

	if (ac != 2)
	{
		std::cout << "error: bad arguments" << std::endl;
		return (1);
	}
	level = av[1];
	log = -1;
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			log = i;
			break ;
		}
	}
	switch (log)
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
