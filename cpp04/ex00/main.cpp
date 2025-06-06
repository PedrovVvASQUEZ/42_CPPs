/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 23:08:35 by codespace         #+#    #+#             */
/*   Updated: 2025/04/20 17:16:07 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "j type is: " << j->getType() << std::endl;
	std::cout << "i type is: " << i->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete (meta);
	delete (j);
	delete (i);
	
	const WrongAnimal	*wrongmeta = new WrongAnimal();
	const WrongAnimal	*wrongcat = new WrongCat();

	std::cout << "wrongmeta type is: " << wrongmeta->getType() << std::endl;
	std::cout << "wrongcat type is: " << wrongcat->getType() << std::endl;
	wrongmeta->makeSound();
	wrongcat->makeSound();

	delete (wrongmeta);
	delete (wrongcat);
	
	return (0);
}