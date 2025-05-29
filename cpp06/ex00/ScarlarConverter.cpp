/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScarlarConverter.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:55:17 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/29 19:11:51 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScarlarConverter.hpp"

// //==================== Contructors N Destructor ===================//

// ScarlarConverter::ScarlarConverter(void)
// {
// 	return ;
// }

// ScarlarConverter::ScarlarConverter(const ScarlarConverter &rhs)
// {
// 	(void)rhs;
// 	return ;
// }

// ScarlarConverter::~ScarlarConverter(void)
// {
// 	return ;
// }

// //=============== Operators Overload Member Functions =============//

// ScarlarConverter	&ScarlarConverter::operator=(const ScarlarConverter &rhs)
// {
// 	(void)rhs;
// 	return (*this);
// }

//======================= Member functions ========================//

void	ScarlarConverter::convert(const std::string &bits)
{
	return ;
}

bool	ScarlarConverter::isChar(const std::string &bits)
{
	if (bits.length() == 1 && !std::isdigit(bits[0]))
		return (true);
	return (bits.length() == 3 && bits[0] == '\'' && bits[2] == '\'');
}

bool	ScarlarConverter::isInt(const std::string &bits)
{
	char	*endPtr;
	long	val;

	val = std::strtol(bits.c_str(), &endPtr,10);
	return (*endPtr == '\0' && val <= std::numeric_limits<int>::max() &&
			val >= std::numeric_limits<int>::min());
}

bool	ScarlarConverter::isFloat(const std::string &bits)
{
	if (bits == "nanf" || bits == "+inff" || bits == "-inff")
		return (true);
	return (bits[bits.length() - 1] == 'f');
}

bool	ScarlarConverter::isDouble(const std::string &bits)
{
	if (bits == "nan" || bits == "+inf" || bits == "-inf")
		return (true);
	return (bits.find('.') != std::string::npos);
}