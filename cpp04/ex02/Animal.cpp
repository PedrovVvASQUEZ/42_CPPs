/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:24:43 by codespace         #+#    #+#             */
/*   Updated: 2025/04/21 17:19:29 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//==================== Contructors N Destructor ===================//

AAnimal::AAnimal(void) : _type("Unknown")
{
	std::cout << "AANIMAL Default construtor" << std::endl;
	return ;
}

AAnimal::AAnimal(const std::string &type) : _type(type)
{
	std::cout << "AANIMAL Setting constructor" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &rhs)
{
	std::cout << "AANIMAL Copy constructor" << std::endl;
	*this = rhs;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AANIMAL Destructor" << std::endl;
	return ;
}

//=============== Operators Overload Member Functions =============//

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

//======================= Member functions ========================//

void	AAnimal::makeSound(void) const
{
	std::cout << "Kruiiiuirurhiurfbciewvrc" << std::endl;
	return ;
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}