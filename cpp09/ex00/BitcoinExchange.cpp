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

//==================== Contructors N Destructor ===================//

BitcoinExchange::BitcoinExchange(void)
{
	dlBtcChart("data.csv");
	return ;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &rhs) : _btc_chart(rhs._btc_chart)
{
	return ;
}

BitcoinExchange::~BitcoinExchange(void)
{
	return ;
}

//=============== Operators Overload Member Functions =============//

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
	{
		_btc_chart = rhs._btc_chart;
	}
	return (*this);
}

//======================= Member functions ========================//

bool	BitcoinExchange::isValidDate(const std::string &date) const
{
	if (date.length() != 10)
		return (false);
	if (date[4] != '-' || date[7] != '-')
		return (false);
	for (size_t i = 0; i < date.length(); i++)
	{
		if (i == 4 || i == 7)
			continue;
		if (!isdigit(date[i]))
			return (false);
	}
	return (true);
}

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

std::string	BitcoinExchange::closestDate(const std::string &date) const
{
	std::map<std::string, float>::const_iterator it = _btc_chart.upper_bound(date);

	if (it == _btc_chart.begin())
		return (_btc_chart.begin()->first);
	--it;
	return (it->first);
}

float	BitcoinExchange::parsePrice(const std::string &priceStr) const
{
	char *end;
	float price = strtof(priceStr.c_str(), &end);

	if (end == priceStr.c_str() || (*end != '\0' && *end != '\n'))
		throw std::runtime_error("Error: invalid number");
		
	return (price);
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

void	BitcoinExchange::processInputLine(const std::string &line)
{
	size_t	pos = line.find(" | ");

	if (pos == std::string::npos)
	{
		std::cerr << "Error: bad input => " << line << std::endl;
		return ;
	}
	std::string date = line.substr(0, pos);
	std::string priceStr = line.substr(pos + 3);
	if (isValidDate(date) == false)
	{
		std::cerr << "Error: bad input => " << date << std::endl;
		return ;
	}
	try
	{
		float	price = parsePrice(priceStr);
		if (isValidPrice(price) == false)
			return ;
		std::string	theDate = closestDate(date);
		float		thePrice = _btc_chart[theDate];
		float		result = price * thePrice;
		std::cout << date << " => " << price << " = " << result << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

void	BitcoinExchange::processFile(const std::string &filename)
{
	std::ifstream	file(filename.c_str());

	if (!file.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return ;
	}
	std::string	line;
	std::getline(file, line);
	while (std::getline(file, line))
		processInputLine(line);
}