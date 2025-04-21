/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:24:43 by codespace         #+#    #+#             */
/*   Updated: 2025/04/20 22:46:21 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

//========================= File Functions ========================//

static std::string	random_str_generator(int size)
{
	const std::string	alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string			random_str = "";

	for (int i = 0; i < size; i++)
		random_str += alphabet[std::rand() % alphabet.size()];
	return (random_str);
}

//==================== Contructors N Destructor ===================//

Brain::Brain(void)
{
	std::cout << "BRAIN Default construtor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = random_str_generator(6);
	return ;
}

Brain::Brain(const Brain &rhs)
{
	std::cout << "BRAIN Copy constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = random_str_generator(8);
	*this = rhs;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "BRAIN Destructor" << std::endl;
	return ;
}

//=============== Operators Overload Member Functions =============//

Brain	&Brain::operator=(const Brain &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

//======================= Member functions ========================//

void	Brain::display_ideas(void) const
{
	for (int i = 0; i < 6; i++)
		std::cout << this->_ideas[i] << "....." << std::endl;
	return ;
}
