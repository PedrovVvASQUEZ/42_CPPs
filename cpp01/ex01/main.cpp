/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:07:31 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/25 18:09:53 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	Zombie		*days_gone;
	int			NB;
	std::string	horde_name;

	horde_name = "Zombie gang";
	if (ac == 1 || std::atoi(av[1]) <= 0)
		NB = 21;
	else
		NB = std::atoi(av[1]);
	if (ac >= 3)
		horde_name = av[2];
	days_gone = zombieHorde(NB, horde_name);
	for (int i = 0; i < NB; i++)
		days_gone[i].announce();
	delete [] days_gone;
	std::cout << "The days_gone horde has been wiped out" << std::endl;
	return (0);
}