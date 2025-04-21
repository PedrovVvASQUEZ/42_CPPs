/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 23:08:35 by codespace         #+#    #+#             */
/*   Updated: 2025/04/21 00:12:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	Dog	dog1;
	Dog dog2;
	Cat	cat1;
	Cat cat2(cat1);

	dog1.display_dog_ideas();
	dog2.display_dog_ideas();
	dog1 = dog2;
	dog1.display_dog_ideas();

	cat1.display_cat_ideas();
	cat2.display_cat_ideas();


	srand((unsigned int)time(NULL));
	Animal	*tab[8];

	for (int i = 0; i < 4; i++)
	{
		tab[i] = new Dog();
		tab[4 + i] = new Cat();
	}
	for (int i = 0; i < 8; i++)
		delete tab[i];
	
return (0);
}