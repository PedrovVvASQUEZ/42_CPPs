/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:26:15 by codespace         #+#    #+#             */
/*   Updated: 2025/04/21 14:56:44 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class	AAnimal{

public:

	AAnimal(void);
	AAnimal(const std::string &type);
	AAnimal(const AAnimal &rhs);
	virtual ~AAnimal(void);
	
	AAnimal	&operator=(const AAnimal &rhs);

	virtual void	makeSound(void) const = 0;
	std::string		getType(void) const;

protected:

	std::string	_type;
};

#endif