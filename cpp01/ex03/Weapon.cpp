/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:37:48 by codespace         #+#    #+#             */
/*   Updated: 2025/03/26 16:01:06 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string the_type) : _type(the_type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string	Weapon::getType(void) const
{
	return (_type);
}

void	Weapon::setType(std::string new_type)
{
	_type = new_type;
	return ;
}