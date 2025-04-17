/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:26:58 by pgrellie          #+#    #+#             */
/*   Updated: 2025/04/16 19:15:04 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


//==================== Contructors N Destructor ==================//

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap")
{
	std::cout << "Scav Default constructor called" << std::endl;

	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "Scav contructor called" << std::endl;
	
	_hit_points = 100;
	_energy_points = 50; 
	_attack_damage = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) : ClapTrap(rhs)
{
	std::cout << "Scav Copy constructor called" << std::endl;

	*this = rhs;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Scav Destructor called" << std::endl;
	return ;
}

//=============== Operators Overload Member Functions =============//

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
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

void	ScavTrap::guardGate(void) const
{
	std::cout << this->_name << " : Holds the door like Hodor" << std::endl;
	return ;
}