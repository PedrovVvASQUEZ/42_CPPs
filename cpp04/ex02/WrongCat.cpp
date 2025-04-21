/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:24:43 by codespace         #+#    #+#             */
/*   Updated: 2025/04/19 00:00:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

//==================== Contructors N Destructor ===================//

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCAT Default constructor" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &rhs) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCAT Copy constructor" << std::endl;
	*this = rhs;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCAT Destructor" << std::endl;
	return ;
}

//=============== Operators Overload Member Functions =============//

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

//======================= Member functions ========================//

void	WrongCat::makeSound(void) const
{
	std::cout << "/// Miaooou ---" << std::endl;
	return ;
}