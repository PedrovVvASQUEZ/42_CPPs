/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:05:47 by codespace         #+#    #+#             */
/*   Updated: 2025/04/21 18:12:16 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice : public AMateria{

public:

	Ice(void);
	Ice(const Ice &rhs);
	~Ice(void);

	Ice	&operator=(const Ice &rhs);

	virtual Ice *clone(void) const;
	virtual void use(ICharacter &target);
};


#endif