/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 21:51:35 by codespace         #+#    #+#             */
/*   Updated: 2025/04/10 17:23:29 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	angel("Angel"), jose("Jose"), nate("Nate");
	ClapTrap	josefa("Josefa");

	josefa.attack("Nobody"), josefa.takeDamage(5), josefa.beRepaired(7);

	angel.attack("Jose"), angel.takeDamage(5), angel.beRepaired(7);
	angel.attack("Jose"), angel.takeDamage(5), angel.beRepaired(7);

	
	jose.attack("Angel"), jose.takeDamage(9), jose.beRepaired(6);
	jose.attack("Angel"), jose.takeDamage(9), jose.beRepaired(6);


	josefa = jose;
	josefa.attack("Nobody"), josefa.takeDamage(5), josefa.beRepaired(7);


	nate.attack("Nate"), nate.takeDamage(1), nate.beRepaired(4);
	nate.attack("Nate"), nate.takeDamage(1), nate.beRepaired(4);

	return (0);
}