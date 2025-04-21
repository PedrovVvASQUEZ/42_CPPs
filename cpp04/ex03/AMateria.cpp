/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:45:55 by codespace         #+#    #+#             */
/*   Updated: 2025/04/21 18:00:26 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//==================== Contructors N Destructor ===================//

AMateria::AMateria(void) : _type("Unknown")
{
	return ;
}

AMateria::AMateria(const std::string &type) : _type(type)
{
	return ;
}

AMateria::AMateria(const AMateria &rhs)
{
	*this = rhs;
	return ;
}

//=============== Operators Overload Member Functions =============//

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

//======================= Member functions ========================//

const std::string	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Using something on " << target.getName() << std::endl;
	return ;
}