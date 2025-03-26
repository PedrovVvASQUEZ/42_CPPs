/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:37:50 by codespace         #+#    #+#             */
/*   Updated: 2025/03/26 16:26:19 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _Bname(name), _Bweapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void) const
{
	if (_Bweapon == NULL)
		std::cout << _Bname << " attacks with their " << "bare knuckles" << std::endl;
	else
		std::cout << _Bname << " attacks with their " << _Bweapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_Bweapon = &weapon;
	return ;
}