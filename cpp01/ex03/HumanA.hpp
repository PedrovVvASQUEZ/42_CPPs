/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:38:31 by codespace         #+#    #+#             */
/*   Updated: 2025/03/26 16:15:23 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class	HumanA{

public:

	void	attack(void) const;
	HumanA(void);
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	
private:

	std::string	_Aname;
	Weapon	&_Aweapon;
};

#endif