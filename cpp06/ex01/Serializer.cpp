/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:04:52 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/02 16:53:04 by pgrellie         ###   ########.fr       */
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

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data		*Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}