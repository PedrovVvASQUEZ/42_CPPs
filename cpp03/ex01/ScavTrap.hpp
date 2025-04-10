/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:26:56 by pgrellie          #+#    #+#             */
/*   Updated: 2025/04/10 18:41:06 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap{

public:

	ScavTrap(void);
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &rhs);
	~ScavTrap(void);

	ScavTrap	&operator=(const ScavTrap &rhs);

	void	guardGate(void);
};

#endif