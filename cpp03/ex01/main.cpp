/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:00:40 by codespace         #+#    #+#             */
/*   Updated: 2025/04/16 19:49:56 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	//============= ClapTrap

	// ClapTrap	angel("Angel"), jose("Jose"), nate("Nate");
	// ClapTrap	josefa("Josefa");

	// josefa.attack("Nobody"), josefa.takeDamage(5), josefa.beRepaired(7);

	// angel.attack("Jose"), angel.takeDamage(5), angel.beRepaired(7);
	// angel.attack("Jose"), angel.takeDamage(5), angel.beRepaired(7);

	
	// jose.attack("Angel"), jose.takeDamage(9), jose.beRepaired(6);
	// jose.attack("Angel"), jose.takeDamage(9), jose.beRepaired(6);


	// josefa = jose;
	// josefa.attack("Nobody"), josefa.takeDamage(5), josefa.beRepaired(7);


	// nate.attack("Nate"), nate.takeDamage(1), nate.beRepaired(4);
	// nate.attack("Nate"), nate.takeDamage(1), nate.beRepaired(4);
	
	//============= ScavTrap

	ScavTrap	adam("Adam"), luis("Luis"), sergio("Sergio");
	ScavTrap	eva("Eva");

	adam.attack("Someone"), adam.takeDamage(5), adam.beRepaired(7);
	adam.attack("Someone"), adam.takeDamage(5), adam.beRepaired(7);
	adam.guardGate();

	
	luis.attack("Laguerta"), luis.takeDamage(9), luis.beRepaired(6);
	luis.attack("Laguerta"), luis.takeDamage(9), luis.beRepaired(6);
	luis.guardGate();

	
	eva = luis;
	eva.attack("Hakimi"), eva.takeDamage(5), eva.beRepaired(7);
	eva.guardGate();

	
	sergio.attack("himself"), sergio.takeDamage(1), sergio.beRepaired(4);
	sergio.attack("himself"), sergio.takeDamage(1), sergio.beRepaired(4);
	sergio.guardGate();

	return (0);
}