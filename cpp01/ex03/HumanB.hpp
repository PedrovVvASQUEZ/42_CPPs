/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:38:29 by codespace         #+#    #+#             */
/*   Updated: 2025/03/26 16:17:35 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class	HumanB{

public:

	void	attack(void) const;
	void	setWeapon(Weapon &weapon);
	HumanB(void);
	HumanB(std::string name);
	~HumanB(void);
	
private:

	std::string	_Bname;
	Weapon		*_Bweapon;
};

#endif