/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:54:23 by codespace         #+#    #+#             */
/*   Updated: 2025/04/17 22:38:32 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap{

public:

	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap &rhs);
	~DiamondTrap(void);

	DiamondTrap	&operator=(const DiamondTrap &rhs);

	void	whoAmI(void);
	using	ScavTrap::attack;

private:

	DiamondTrap(void);
	std::string _name;
};

#endif