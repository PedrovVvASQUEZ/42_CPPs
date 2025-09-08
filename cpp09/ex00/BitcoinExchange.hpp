/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:35:25 by pgrellie          #+#    #+#             */
/*   Updated: 2025/07/11 16:44:39 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <string>
# include <algorithm>
# include <sstream>
# include <iomanip>
# include <stdexcept>

class BitcoinExchange{

public:

	BitcoinExchange(void);
	BitcoinExchange(const BitcoinExchange &rhs);
	~BitcoinExchange(void);

	BitcoinExchange	&operator=(const BitcoinExchange &rhs);

	void	processFile(const std::string &filename);

private:

	std::map<std::string, float> _btc_chart;

	void		isValidDate(const std::string &date) const;
	bool		isValidValue(const float value) const;
	float		makeValueFloat(const std::string &btc_chart) const;
	std::string	closestDate(const std::string &date) const;
	void		dlBtcChart(const std::string &filename);
	void		processInputLine(const std::string &line);
};

#endif