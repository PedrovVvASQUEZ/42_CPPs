/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:08:01 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/25 18:05:07 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string horde_name)
{
	Zombie	*the_horde;

	the_horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		the_horde[i].set_name(horde_name);
	return (the_horde);
}
