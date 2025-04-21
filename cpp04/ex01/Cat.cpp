/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:24:43 by codespace         #+#    #+#             */
/*   Updated: 2025/04/20 22:42:12 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

//==================== Contructors N Destructor ===================//

Cat::Cat(void) : Animal("Cat"), _cat_brain(new Brain())
{
	std::cout << "CAT Default constructor" << std::endl;
	return ;
}

Cat::Cat(const Cat &rhs) : Animal("Cat"), _cat_brain(new Brain(*(rhs._cat_brain)))
{
	std::cout << "CAT Copy constructor" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "CAT Destructor" << std::endl;
	delete (_cat_brain);
	return ;
}

//=============== Operators Overload Member Functions =============//

Cat	&Cat::operator=(const Cat &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		*(this->_cat_brain) = *(rhs._cat_brain);
	}
	return (*this);
}

//======================= Member functions ========================//

void	Cat::makeSound(void) const
{
	std::cout << "/// Miaooou ---" << std::endl;
	return ;
}

void	Cat::display_cat_ideas(void) const
{
	this->_cat_brain->display_ideas();
	return ;
}