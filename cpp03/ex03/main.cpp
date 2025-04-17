/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:54:20 by codespace         #+#    #+#             */
/*   Updated: 2025/04/17 22:57:53 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	ben("Ben");

	ben.attack("Somebody");
	ben.guardGate();
	ben.beRepaired(8);
	ben.highFivesGuys();
	ben.takeDamage(6);
	ben.whoAmI();

	return (0);
}