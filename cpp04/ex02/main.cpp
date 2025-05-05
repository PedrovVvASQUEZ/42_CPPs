/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 23:08:35 by codespace         #+#    #+#             */
/*   Updated: 2025/05/05 16:54:52 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// AAnimal	chien("leopard");
	// AAnimal	*aah = new AAnimal("leopard");
	srand((unsigned int)time(NULL));

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;
	delete i;

	Dog	dog1;
	Dog dog2;
	Cat	cat1;
	Cat cat2(cat1);

	std::cout << std::endl;
	dog1.display_dog_ideas();
	std::cout << std::endl;
	dog2.display_dog_ideas();
	std::cout << std::endl;
	dog1 = dog2;
	dog1.display_dog_ideas();
	std::cout << std::endl;
	cat1.display_cat_ideas();
	std::cout << std::endl;
	cat2.display_cat_ideas();
	std::cout << std::endl;

	std::cout << "|||| Here is the array ||||" << std::endl << std::endl;
	
	AAnimal	*tab[8];

	for (int i = 0; i < 4; i++)
	{
		tab[i] = new Dog();
		tab[4 + i] = new Cat();
	}
	for (int i = 0; i < 8; i++)
		delete tab[i];
	
return (0);
}