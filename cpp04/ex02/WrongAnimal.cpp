/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:24:43 by codespace         #+#    #+#             */
/*   Updated: 2025/04/19 00:01:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//==================== Contructors N Destructor ===================//

WrongAnimal::WrongAnimal(void) : _type("Unknown")
{
	std::cout << "WrongANIMAL Default construtor" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
	std::cout << "WrongANIMAL Setting constructor" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	std::cout << "WrongANIMAL Copy constructor" << std::endl;
	*this = rhs;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongANIMAL Destructor" << std::endl;
	return ;
}

//=============== Operators Overload Member Functions =============//

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

//======================= Member functions ========================//

void	WrongAnimal::makeSound(void) const
{
	std::cout << "PrrPrrPrrPrrPrr..." << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}