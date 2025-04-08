/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 21:53:22 by codespace         #+#    #+#             */
/*   Updated: 2025/04/08 23:48:14 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


//==================== Contructors N Destructor ==================//

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Constructor called" << std::endl;

	return ;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = rhs;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	
	return ;
}

//=============== Operators Overload Member Functions =============//

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_attack_damage = rhs._attack_damage;
		this->_energy_points = rhs._energy_points;
		this->_hit_points = rhs._hit_points;
	}
	return (*this);
}

//======================= Member functions ========================//

void	ClapTrap::attack(const std::string &target)
{
	
	return ;
}