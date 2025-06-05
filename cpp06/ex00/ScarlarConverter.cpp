/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScarlarConverter.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:55:17 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/30 14:52:05 by codespace        ###   ########.fr       */
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


bool	ScarlarConverter::isChar(const std::string &bits)
{
	if (bits.length() == 1 && !std::isdigit(bits[0]))
		return (true);
	return (false);
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

void	ScarlarConverter::convertToChar(const std::string &bits)
{
	try
	{
		int value;
		if (isChar(bits))
			value = bits[0];
		else if (isInt(bits))
			value = std::stoi(bits);
		else if (isFloat(bits))
			value = static_cast<int>(std::stof(bits));
		else if (isDouble(bits))
			value = static_cast<int>(std::stod(bits));
		else
		{
			std::cout << "char: impossible" << std::endl;
			return;
		}
		if (value < 0 || value > 127)
			std::cout << "char: impossible" << std::endl;
		else if (!std::isprint(value))
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	}
	catch (...)
	{
		std::cout << "char: impossible" << std::endl;
	}
}

void	ScarlarConverter::convertToInt(const std::string &bits)
{
	try
	{
		int value;
		if (isChar(bits))
			value = bits[0];
		else if (isInt(bits))
			value = std::stoi(bits);
		else if (isFloat(bits))
		{
			float f = std::stof(bits);
			if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
				throw std::out_of_range("overflow");
			value = static_cast<int>(f);
		}
		else if (isDouble(bits))
		{
			double d = std::stod(bits);
			if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
				throw std::out_of_range("overflow");
			value = static_cast<int>(d);
		}
		else
		{
			std::cout << "int: impossible" << std::endl;
			return;
		}
		std::cout << "int: " << value << std::endl;
	}
	catch (...)
	{
		std::cout << "int: impossible" << std::endl;
	}
}

void	ScarlarConverter::convertToFloat(const std::string &bits)
{
	try
	{
		float value;
		if (isChar(bits))
			value = bits.length() == 1 ? bits[0] : bits[1];
		else if (isInt(bits))
			value = static_cast<float>(std::stoi(bits));
		else if (isFloat(bits))
			value = std::stof(bits);
		else if (isDouble(bits))
			value = static_cast<float>(std::stod(bits));
		else
		{
			std::cout << "float: impossible" << std::endl;
			return;
		}
		if (bits == "nan" || bits == "nanf")
			std::cout << "float: nanf" << std::endl;
		else if (bits == "+inf" || bits == "+inff")
			std::cout << "float: +inff" << std::endl;
		else if (bits == "-inf" || bits == "-inff")
			std::cout << "float: -inff" << std::endl;
		else
		{
			std::cout << "float: " << value;
			if (value == static_cast<int>(value))
				std::cout << ".0";
			std::cout << "f" << std::endl;
		}
	}
	catch (...)
	{
		std::cout << "float: impossible" << std::endl;
	}
}

void	ScarlarConverter::convertToDouble(const std::string &bits)
{
	try
	{
		double value;
		if (isChar(bits))
			value = bits.length() == 1 ? bits[0] : bits[1];
		else if (isInt(bits))
			value = static_cast<double>(std::stoi(bits));
		else if (isFloat(bits))
			value = static_cast<double>(std::stof(bits));
		else if (isDouble(bits))
			value = std::stod(bits);
		else 
		{
			std::cout << "double: impossible" << std::endl;
			return;
		}
		if (bits == "nan" || bits == "nanf")
			std::cout << "double: nan" << std::endl;
		else if (bits == "+inf" || bits == "+inff")
			std::cout << "double: +inf" << std::endl;
		else if (bits == "-inf" || bits == "-inff")
			std::cout << "double: -inf" << std::endl;
		else
		{
			std::cout << "double: " << value;
			if (value == static_cast<int>(value))
				std::cout << ".0";
			std::cout << std::endl;
		}
	}
	catch (...)
	{
		std::cout << "double: impossible" << std::endl;
	}
}

void	ScarlarConverter::convert(const std::string &bits)
{
	convertToChar(bits);
	convertToInt(bits);
	convertToFloat(bits);
	convertToDouble(bits);
}