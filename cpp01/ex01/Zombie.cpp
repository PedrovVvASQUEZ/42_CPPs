/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:07:58 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/25 18:10:58 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("normal Zomb")
{
	return ;
}

Zombie::Zombie(std::string nz_name) : _name(nz_name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombebey " << _name << " has died :'(" << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiinnnzzzZZ..." << std::endl;
	return ;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
	return ;
}
