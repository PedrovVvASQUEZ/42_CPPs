/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:21:23 by codespace         #+#    #+#             */
/*   Updated: 2025/04/18 16:24:06 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal{

public:

	Cat(void);
	Cat(const Cat &rhs);
	~Cat(void);
	
	Cat	&operator=(const Cat &rhs);
	
	virtual void	makeSound(void) const;
};

#endif