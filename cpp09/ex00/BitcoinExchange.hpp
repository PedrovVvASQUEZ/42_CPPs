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

class BitcoinExchange{

public:

	BitcoinExchange(void);
	~BitcoinExchange(void);

	void	processFile(const std::string &filename);

private:

	std::map<std::string, float> _btc_chart;

	bool		isValidDate(const std::string &date) const;
	bool		isValidPrice(const float price) const;
	float		parsePrice(const std::string &btc_chart) const;
	std::string	closestDate(const std::string &date) const;
	void		dlBtcChart(const std::string &filename);
	void		processInputLine(const std::string &line);
};

#endif