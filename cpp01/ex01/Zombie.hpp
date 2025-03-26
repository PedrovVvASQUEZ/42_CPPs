/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:08:31 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/26 14:40:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie{
public:

	void	announce(void) const;
	void	set_name(std::string name);
	Zombie(void);
	Zombie(std::string nz_name);
	~Zombie(void);

private:

	std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif