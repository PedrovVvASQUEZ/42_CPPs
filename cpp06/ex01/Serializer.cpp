/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:04:52 by pgrellie          #+#    #+#             */
/*   Updated: 2025/07/02 18:21:59 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// //==================== Contructors N Destructor ===================//

// Serializer::Serializer(void)
// {
// 	return ;
// }

// Serializer::Serializer(const Serializer &rhs)
// {
// 	(void)rhs;
// 	return ;
// }

// Serializer::~Serializer(void)
// {
// 	return ;
// }

// //=============== Operators Overload Member Functions =============//

// Serializer	&Serializer::operator=(const Serializer &rhs)
// {
// 	(void)rhs;
// 	return (*this);
// }

//======================= Member functions ========================//

unsigned long	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<unsigned long>(ptr));
}

Data			*Serializer::deserialize(unsigned long raw)
{
	return (reinterpret_cast<Data *>(raw));
}