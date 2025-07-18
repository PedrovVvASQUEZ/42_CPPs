
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:55:20 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/29 18:45:21 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <limits>
# include <iostream>
# include <cmath>
# include <cctype>
# include <cstdlib>
# include <stdexcept>


class	ScalarConverter{

public:

	static void	convert(const std::string &bits);

private:

	ScalarConverter(void);
	ScalarConverter(const ScalarConverter &rhs);
	~ScalarConverter(void);

	ScalarConverter &operator=(const ScalarConverter &rhs);

	static bool	isChar(const std::string &bits);
	static bool	isInt(const std::string &bits);
	static bool	isFloat(const std::string &bits);
	static bool	isDouble(const std::string &bits);

	static void	convertToChar(const std::string &bits);
	static void	convertToInt(const std::string &bits);
	static void	convertToFloat(const std::string &bits);
	static void convertToDouble(const std::string &bits);
};

#endif