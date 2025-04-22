/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:11:17 by codespace         #+#    #+#             */
/*   Updated: 2025/04/21 23:16:47 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//==================== Contructors N Destructor ===================//

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::Cure(const Cure &rhs) : AMateria(rhs)
{
	*this = rhs;
	return ;
}

Cure::~Cure(void)
{
	return ;
}

//=============== Operators Overload Member Functions =============//

Cure		&Cure::operator=(const Cure &rhs)
{
	(void)rhs;
	return (*this);
}

//======================= Member functions ========================//

Cure		*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *"
				<< std::endl;
	return ;
}
