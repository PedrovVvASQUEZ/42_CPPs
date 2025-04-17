/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:10:37 by codespace         #+#    #+#             */
/*   Updated: 2025/04/16 19:46:55 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	//============= ClapTrap

	// ClapTrap	angel("Angel"), jose("Jose"), nate("Nate");

	// angel.attack("Jose"), angel.takeDamage(5), angel.beRepaired(7);

	// jose.attack("Angel"), jose.takeDamage(9), jose.beRepaired(6);

	// nate.attack("Nate"), nate.takeDamage(1), nate.beRepaired(4);
	
	//============= ScavTrap

	// ScavTrap	adam("Adam"), luis("Luis"), sergio("Sergio");

	// adam.attack("Someone"), adam.takeDamage(5), adam.beRepaired(7);
	// adam.guardGate();
	
	// luis.attack("Laguerta"), luis.takeDamage(9), luis.beRepaired(6);
	// luis.guardGate();
	
	// sergio.attack("himself"), sergio.takeDamage(1), sergio.beRepaired(4);
	// sergio.guardGate();

	// ============ FragTrap

	FragTrap	makima("Makima"), seiten("Seiten");
	FragTrap	fragtrap;
	FragTrap	yooo(fragtrap);
	 
	makima.attack("Heishi"), makima.takeDamage(5), makima.beRepaired(7);
	makima.highFivesGuys();
	
	seiten.attack("Yotoro"), seiten.takeDamage(5), seiten.beRepaired(7);
	seiten.highFivesGuys();

	fragtrap.attack("Someone"), fragtrap.takeDamage(5), fragtrap.beRepaired(7);
	fragtrap.highFivesGuys();

	fragtrap = makima;
	fragtrap.attack("Someone"), fragtrap.takeDamage(5), fragtrap.beRepaired(7);
	fragtrap.highFivesGuys();

	yooo.attack("");
	yooo.highFivesGuys();
	
	return (0);
}