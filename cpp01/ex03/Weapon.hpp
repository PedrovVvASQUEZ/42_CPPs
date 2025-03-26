/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 14:38:27 by codespace         #+#    #+#             */
/*   Updated: 2025/03/26 14:56:58 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string> 

class	Weapon{

public:

	const std::string	getType(void) const;
	void		setType(std::string new_type);
	Weapon(void);
	Weapon(std::string the_type);
	~Weapon(void);

private:
	std::string	_type;
};

#endif