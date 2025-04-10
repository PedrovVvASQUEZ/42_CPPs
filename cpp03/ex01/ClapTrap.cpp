/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 21:53:22 by codespace         #+#    #+#             */
/*   Updated: 2025/04/10 17:40:44 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


//==================== Contructors N Destructor ==================//

ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;

	return ;
}

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
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks "
				<< target << " causing " << this->_attack_damage << " points of damage!"
				<< std::endl;
		this->_energy_points -= 1;
	}
	else
	{
		if (this->_energy_points <= 0 && this->_hit_points > 0)
		{
			std::cout << "Couldn't attack! " << this->_name
				<< " has " << this->_energy_points << " energy points" << std::endl;
		}
		else
			std::cout << "Couldn't attack! " << this->_name
				<< " is dead" << std::endl;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " has been under attack! Losing "
				<< amount << " of hit points" << std::endl;
		this->_hit_points -= amount;
		std::cout << "Remaining hit points for " << this->_name << ": "
				<< this->_hit_points << std::endl;
		if (this->_hit_points <= 0)
			std::cout << this->_name << " just died :'(" << std::endl;
	}
	else
		std::cout << this->_name << " is already dead" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " repair itself gaining " << amount
				<< " hit points" << std::endl;
		this->_energy_points -= 1;
		this->_hit_points += amount;
		std::cout << "Remaining hit points for " << this->_name << ": "
				<< this->_hit_points << std::endl;
	}
	else
	{
		if (this->_energy_points <= 0 && this->_hit_points > 0)
		{
			std::cout << "Couldn't repair! " << this->_name
				<< " has " << this->_energy_points << " energy points" << std::endl;
		}
		else
			std::cout << "Couldn't repair! " << this->_name
				<< " is dead" << std::endl;
	}
	return ;
}