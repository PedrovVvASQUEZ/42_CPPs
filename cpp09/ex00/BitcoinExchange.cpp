/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:35:27 by pgrellie          #+#    #+#             */
/*   Updated: 2025/07/11 16:42:23 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <sstream>
#include <iomanip>

//==================== Contructors N Destructor ===================//

BitcoinExchange::BitcoinExchange(void)
{
	dlBtcChart("data.csv");
	return ;
}

BitcoinExchange::~BitcoinExchange(void)
{
	return ;
}

//=============== Operators Overload Member Functions =============//

//======================= Member functions ========================//

bool	BitcoinExchange::isValidPrice(float value) const
{
	if (value < 0)
	{
		std::cerr << "Error: not a positive number" << std::endl;
		return (false);
	}
	if (value > 1000)
	{
		std::cerr << "Error: too large a number" << std::endl;
		return (false);
	}
	return (true);
}

void	BitcoinExchange::dlBtcChart(const std::string &filename)
{
	std::ifstream	infile(filename.c_str());
	if (!infile.is_open())
		throw std::runtime_error("Error: couldn't open wanted file");
	std::string	line;
	std::getline(infile, line);
	while (std::getline(infile, line))
	{
		size_t	pos = line.find(',');
		if (pos != std::string::npos)
		{
			std::string	date = line.substr(0, pos);
			float		price = std::atof(line.substr(pos + 1).c_str());
			_btc_chart[date] = price;
		}
	}
	return ;
}