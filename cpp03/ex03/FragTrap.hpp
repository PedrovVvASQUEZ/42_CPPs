/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:11:54 by codespace         #+#    #+#             */
/*   Updated: 2025/04/16 19:57:06 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_TRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap{

public:

	FragTrap(void);
	FragTrap(const std::string name);
	FragTrap(const FragTrap &rhs);
	~FragTrap(void);

	FragTrap	&operator=(const FragTrap &rhs);
	
	void highFivesGuys(void);
};

#endif