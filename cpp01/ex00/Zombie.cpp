/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:51:44 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/21 18:01:41 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("Zomboy")
{
	return ;
}
Zombie::Zombie(std::string nz_name) : _name(nz_name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombebey " << _name
			<< " is dead :'(" << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}



