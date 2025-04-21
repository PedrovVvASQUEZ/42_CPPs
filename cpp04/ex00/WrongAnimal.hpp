/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:26:15 by codespace         #+#    #+#             */
/*   Updated: 2025/04/19 00:18:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal{

public:

	WrongAnimal(void);
	WrongAnimal(const std::string &type);
	WrongAnimal(const WrongAnimal &rhs);
	virtual ~WrongAnimal(void);
	
	WrongAnimal	&operator=(const WrongAnimal &rhs);

	void	makeSound(void) const;
	std::string		getType(void) const;

protected:

	std::string	_type;
};

#endif