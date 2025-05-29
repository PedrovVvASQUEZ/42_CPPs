/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScarlarConverter.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 16:55:20 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/29 18:45:21 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCARLARCONVERTER_HPP
# define SCARLARCONVERTER_HPP

# include <string>
# include <limits>
# include <iostream>
# include <cmath>
# include <cctype>
# include <cstdlib>


class	ScarlarConverter{

public:

	static void	convert(const std::string &bits);

private:

	ScarlarConverter(void);
	ScarlarConverter(const ScarlarConverter &rhs);
	~ScarlarConverter(void);

	ScarlarConverter &operator=(const ScarlarConverter &rhs);

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