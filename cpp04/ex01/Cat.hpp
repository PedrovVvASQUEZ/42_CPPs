/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:21:23 by codespace         #+#    #+#             */
/*   Updated: 2025/04/20 22:40:09 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal{

public:

	Cat(void);
	Cat(const Cat &rhs);
	virtual ~Cat(void);
	
	Cat	&operator=(const Cat &rhs);
	
	virtual void	makeSound(void) const;
	void			display_cat_ideas(void) const;

private:

	Brain	*_cat_brain;
};

#endif