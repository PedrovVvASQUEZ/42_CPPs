/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 21:52:14 by codespace         #+#    #+#             */
/*   Updated: 2025/04/08 22:38:29 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap{

public:

	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &rhs);
	~ClapTrap(void);

	ClapTrap	&operator=(const ClapTrap &rhs);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

private:

	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;
};

#endif