/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 16:08:14 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/25 15:21:11 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "======= Instanciation ========" << std::endl;
	
	Zombie	first;
	Zombie	Zzzzz("Yamal");

	first.announce();
	Zzzzz.announce();
	
	std::cout << "======== Random shits ========" << std::endl;

	randomChump("Edgar");
	randomChump("Salah");

	std::cout << "======= Heap zombies =========" << std::endl;

	Zombie	*ptrz;
	
	ptrz = newZombie("Lahziz");
	ptrz->announce();
	delete(ptrz);
}
