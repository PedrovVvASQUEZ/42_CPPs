/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:05:49 by codespace         #+#    #+#             */
/*   Updated: 2025/04/21 23:18:56 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class	Cure : public AMateria{

	public:
	
		Cure(void);
		Cure(const Cure &rhs);
		~Cure(void);
	
		Cure	&operator=(const Cure &rhs);
	
		virtual Cure *clone(void) const;
		virtual void use(ICharacter &target);
	};

#endif