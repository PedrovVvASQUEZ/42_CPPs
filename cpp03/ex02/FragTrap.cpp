/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:11:19 by codespace         #+#    #+#             */
/*   Updated: 2025/04/16 19:14:46 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


//==================== Contructors N Destructor ==================//

FragTrap::FragTrap(void) : ClapTrap("FragTrap")
{
	std::cout << "Fragmentation Default constructor called" << std::endl;

	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	return ;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "Fragmentation constructor called" << std::endl;

	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
	return ;
}

FragTrap::FragTrap(const FragTrap &rhs)
{
	std::cout << "Fragmentation Copy constructor called" << std::endl;
	
	*this = rhs;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Fragmentation destructor called" << std::endl;
	return ;
}

//=============== Operators Overload Member Functions =============//

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_attack_damage = rhs._attack_damage;
		this->_energy_points = rhs._energy_points;
	}
	return (*this);
}

//======================= Member functions ========================//

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " says : Hit me five dumbo !" << std::endl;
	return ;
}