/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:18:50 by codespace         #+#    #+#             */
/*   Updated: 2025/04/20 22:40:05 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal{

public:

	Dog(void);
	Dog(const Dog &rhs);
	virtual ~Dog(void);

	Dog	&operator=(const Dog &rhs);

	virtual void	makeSound(void) const;
	void			display_dog_ideas(void) const;

private:

	Brain	*_dog_brain;
};

#endif