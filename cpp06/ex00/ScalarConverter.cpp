/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:55:17 by pgrellie          #+#    #+#             */
/*   Updated: 2025/07/07 15:37:30 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

bool	ScalarConverter::isChar(const std::string &bits)
{
	if (bits.length() == 1 && !std::isdigit(bits[0]))
		return (true);
	return (false);
}

bool	ScalarConverter::isInt(const std::string &bits)
{
	char	*endPtr;
	long	val;

	val = std::strtol(bits.c_str(), &endPtr, 10);
	return (*endPtr == '\0' && val <= std::numeric_limits<int>::max() &&
			val >= std::numeric_limits<int>::min());
}

bool	ScalarConverter::isFloat(const std::string &bits)
{
	if (bits == "nanf" || bits == "+inff" || bits == "-inff")
		return (true);
	if (bits.empty() || bits[bits.length() - 1] != 'f')
		return (false);
	std::string	strnof = bits.substr(0, bits.length() - 1);
	char		*endPtr;
	if (strnof.empty() == true)
		return (false);
	std::strtof(strnof.c_str(), &endPtr);
	return (*endPtr == '\0');
}

bool	ScalarConverter::isDouble(const std::string &bits)
{
	if (bits == "nan" || bits == "+inf" || bits == "-inf")
		return (true);
	char	*endPtr;
	std::strtod(bits.c_str(), &endPtr);
	return (*endPtr == '\0' && bits.find('.') != std::string::npos);
}

void	ScalarConverter::convertToChar(const std::string &bits)
{
	try
	{
		int value;
		if (bits == "nan" || bits == "nanf" || bits == "+inf"
				|| bits == "+inff" || bits == "-inf" || bits == "-inff")
		{
			std::cout << "char: impossible" << std::endl;
			return;
		}
		else if (isChar(bits))
			value = static_cast<int>(bits[0]);
		else if (isInt(bits))
			value = std::strtol(bits.c_str(), NULL, 10);
		else if (isFloat(bits))
			value = static_cast<int>(std::strtof(bits.c_str(), NULL));
		else if (isDouble(bits))
			value = static_cast<int>(std::strtod(bits.c_str(), NULL));
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
		std::cerr << "char: impossible" << std::endl;
	}
}

void	ScalarConverter::convertToInt(const std::string &bits)
{
	try
	{
		int value;
		if (bits == "nan" || bits == "nanf" || bits == "+inf"
				|| bits == "+inff" || bits == "-inf" || bits == "-inff")
		{
			std::cout << "int: impossible" << std::endl;
			return;
		}
		else if (isChar(bits))
			value = static_cast<int>(bits[0]);
		else if (isInt(bits))
			value = std::strtol(bits.c_str(), NULL, 10);
		else if (isFloat(bits))
		{
			float f = std::strtof(bits.c_str(), NULL);
			if (f > std::numeric_limits<int>::max() || f < std::numeric_limits<int>::min())
				throw std::out_of_range("overflow");
			value = static_cast<int>(f);
		}
		else if (isDouble(bits))
		{
			double d = std::strtod(bits.c_str(), NULL);
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
		std::cerr << "int: impossible" << std::endl;
	}
}

void	ScalarConverter::convertToFloat(const std::string &bits)
{
	try
	{
		float value;
		if (isChar(bits))
			value = static_cast<float>(bits[0]);
		else if (isInt(bits))
			value = static_cast<float>(std::strtol(bits.c_str(), NULL, 10));
		else if (isFloat(bits))
			value = std::strtof(bits.c_str(), NULL);
		else if (isDouble(bits))
			value = static_cast<float>(std::strtod(bits.c_str(), NULL));
		else
		{
			std::cerr << "float: impossible" << std::endl;
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
		std::cerr << "float: impossible" << std::endl;
	}
}

void	ScalarConverter::convertToDouble(const std::string &bits)
{
	try
	{
		double value;
		if (isChar(bits))
			value = static_cast<double>(bits[0]);
		else if (isInt(bits))
			value = static_cast<double>(std::strtol(bits.c_str(), NULL, 10));
		else if (isFloat(bits))
			value = static_cast<double>(std::strtof(bits.c_str(), NULL));
		else if (isDouble(bits))
			value = std::strtod(bits.c_str(), NULL);
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
		std::cerr << "double: impossible" << std::endl;
	}
}

void	ScalarConverter::convert(const std::string &bits)
{
	convertToChar(bits);
	convertToInt(bits);
	convertToFloat(bits);
	convertToDouble(bits);
}