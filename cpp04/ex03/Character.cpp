/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:00:46 by codespace         #+#    #+#             */
/*   Updated: 2025/04/22 00:27:48 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

//==================== Contructors N Destructor ===================//

Character::Character(void) : _name("John Do")
{
	for (int i = 0; i < _items_nb; i++)
		this->_items[i] = NULL; 
	return ;
}

Character::Character(const std::string &name) : _name(name)
{
	for (int i = 0; i < _items_nb; i++)
		this->_items[i] = NULL; 
	return ;
}

Character::Character(const Character &rhs)
{
	*this = rhs;
	return ;
}

Character::Character(void)
{
	for (int i = 0; i < _items_nb; i++)
	{
		if (_items[i])
			delete (_items[i]);
	}
	return ;
}

//=============== Operators Overload Member Functions =============//

Character	&Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		_name = rhs._name;
		for (int i = 0; i < _items_nb; i++)
		{
			if (_items[i])
				delete _items[i];
			if (rhs._items[i])
				_items[i] = rhs._items[i]->clone();
			else
				_items[i] = NULL;
		}
	}
	return (*this);
}

//======================= Member functions ========================//

const std::string	&Character::getName(void) const
{
	return (this->_name);
}

