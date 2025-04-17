/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:54:17 by codespace         #+#    #+#             */
/*   Updated: 2025/04/17 23:02:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


//==================== Contructors N Destructor ==================//

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DEFAULT DIAMOND CONSTRUCT" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	std::cout << "DIAMONDTRAP CONSTRUCT CALLED" << std::endl;

	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs) : ClapTrap(rhs), FragTrap(rhs), ScavTrap(rhs), _name(rhs._name)
{
	std::cout << "COPY DIAMOND CONSTRUCT CALLED" << std::endl;

	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DIAMOND DESTRUCT CALLED" << std::endl;
	return ;
}

//=============== Operators Overload Member Functions =============//

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hit_points = rhs._hit_points;
		this->_energy_points = rhs._energy_points;
		this->_attack_damage = rhs._attack_damage;
	}
	return (*this);
}

//======================= Member functions ========================//

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name is : " << this->_name << " | ClapTrap name is : "
				<< ClapTrap::_name << std::endl;
	return ;
}