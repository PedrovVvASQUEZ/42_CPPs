/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:24:43 by codespace         #+#    #+#             */
/*   Updated: 2025/04/20 22:42:05 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

//==================== Contructors N Destructor ===================//

Dog::Dog(void) : Animal("Dog"), _dog_brain(new Brain())
{
	std::cout << "DOG Default constructor" << std::endl;
	return ;
}

Dog::Dog(const Dog &rhs) : Animal("Dog"), _dog_brain(new Brain(*(rhs._dog_brain)))
{
	std::cout << "DOG Copy constructor" << std::endl;
	*this = rhs;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "DOG Destructor" << std::endl;
	delete (_dog_brain);
	return ;
}

//=============== Operators Overload Member Functions =============//

Dog	&Dog::operator=(const Dog &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
		*(this->_dog_brain) = *(rhs._dog_brain);
	}
	return (*this);
}

//======================= Member functions ========================//

void	Dog::makeSound(void) const
{
	std::cout << "/// Fucking Barks ---" << std::endl;
	return ;
}

void	Dog::display_dog_ideas(void) const
{
	this->_dog_brain->display_ideas();
	return ;
}
