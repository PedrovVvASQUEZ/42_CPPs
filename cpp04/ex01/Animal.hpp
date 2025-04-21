/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:26:15 by codespace         #+#    #+#             */
/*   Updated: 2025/04/19 00:18:05 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal{

public:

	Animal(void);
	Animal(const std::string &type);
	Animal(const Animal &rhs);
	virtual ~Animal(void);
	
	Animal	&operator=(const Animal &rhs);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

protected:

	std::string	_type;
};

#endif