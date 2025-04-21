/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:24:43 by codespace         #+#    #+#             */
/*   Updated: 2025/04/18 23:50:27 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//==================== Contructors N Destructor ===================//

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "DOG Default constructor" << std::endl;
	return ;
}

Dog::Dog(const Dog &rhs) : Animal("Dog")
{
	std::cout << "DOG Copy constructor" << std::endl;
	*this = rhs;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "DOG Destructor" << std::endl;
	return ;
}

//=============== Operators Overload Member Functions =============//

Dog	&Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

//======================= Member functions ========================//

void	Dog::makeSound(void) const
{
	std::cout << "/// Fucking Barks ---" << std::endl;
	return ;
}