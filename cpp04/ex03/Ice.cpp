/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:11:17 by codespace         #+#    #+#             */
/*   Updated: 2025/04/21 23:19:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//==================== Contructors N Destructor ===================//

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::Ice(const Ice &rhs) : AMateria(rhs)
{
	*this = rhs;
	return ;
}

Ice::~Ice(void)
{
	return ;
}

//=============== Operators Overload Member Functions =============//

Ice		&Ice::operator=(const Ice &rhs)
{
	(void)rhs;
	return (*this);
}

//======================= Member functions ========================//

Ice		*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()
				<< " *" << std::endl;
	return ;
}
