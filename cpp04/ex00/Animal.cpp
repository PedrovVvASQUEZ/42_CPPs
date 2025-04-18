/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:24:43 by codespace         #+#    #+#             */
/*   Updated: 2025/04/18 16:10:15 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//==================== Contructors N Destructor ===================//

Animal::Animal(void) : _type("Unknown")
{
	std::cout << "ANIMAL Default construtor" << std::endl;
	return ;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << "ANIMAL Setting constructor" << std::endl;
	return ;
}

Animal::Animal(const Animal &rhs)
{
	std::cout << "ANIMAL Copy constructor" << std::endl;
	*this = rhs;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "ANIMAL Destructor" << std::endl;
	return ;
}

//=============== Operators Overload Member Functions =============//

Animal	&Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

//======================= Member functions ========================//

void	Animal::makeSound(void) const
{
	std::cout << "Kruiiiuirurhiurfbciewvrc" << std::endl;
	return ;
}