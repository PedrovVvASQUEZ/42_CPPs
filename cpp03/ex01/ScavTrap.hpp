/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:26:56 by pgrellie          #+#    #+#             */
/*   Updated: 2025/04/17 22:59:09 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap{

public:

	ScavTrap(void);
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &rhs);
	~ScavTrap(void);

	ScavTrap	&operator=(const ScavTrap &rhs);

	void	guardGate(void) const;
	void	attack(const std::string &target);
};

#endif