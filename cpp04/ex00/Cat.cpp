/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:24:43 by codespace         #+#    #+#             */
/*   Updated: 2025/04/18 23:50:18 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//==================== Contructors N Destructor ===================//

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "CAT Default constructor" << std::endl;
	return ;
}

Cat::Cat(const Cat &rhs) : Animal("Cat")
{
	std::cout << "CAT Copy constructor" << std::endl;
	*this = rhs;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "CAT Destructor" << std::endl;
	return ;
}

//=============== Operators Overload Member Functions =============//

Cat	&Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

//======================= Member functions ========================//

void	Cat::makeSound(void) const
{
	std::cout << "/// Miaooou ---" << std::endl;
	return ;
}