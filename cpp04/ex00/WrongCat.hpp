/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:21:23 by codespace         #+#    #+#             */
/*   Updated: 2025/04/20 17:06:55 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal{

public:

	WrongCat(void);
	WrongCat(const WrongCat &rhs);
	virtual ~WrongCat(void);
	
	WrongCat	&operator=(const WrongCat &rhs);
	
	void	makeSound(void) const;
};

#endif