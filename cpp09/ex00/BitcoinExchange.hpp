/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:35:25 by pgrellie          #+#    #+#             */
/*   Updated: 2025/08/08 17:36:52 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <sstream>
# include <string>
# include <exception>



class BitcoinExchange{

public:

	BitcoinExchange(void);
	BitcoinExchange(const BitcoinExchange &rhs);
	~BitcoinExchange(void);
	
	BitcoinExchange	&operator=(const BitcoinExchange &rhs);
	

private:

	std::map<std::string, double>	_chart;
};

#endif

// class BitcoinExchange {
// public:
//     // Constructeurs (supprimez le doublon)
//     BitcoinExchange(void);
//     BitcoinExchange(const BitcoinExchange &rhs);
//     ~BitcoinExchange(void);
    
//     BitcoinExchange &operator=(const BitcoinExchange &rhs);
    
//     // Méthodes principales
//     void loadDatabase(const std::string &filename);
//     void processInput(const std::string &filename);
//     double getPrice(const std::string &date) const;
    
//     // Validation
//     bool isValidDate(const std::string &date) const;
//     bool isValidValue(double value) const;
    
// private:
//     std::map<std::string, double> _chart;
    
//     // Méthodes utilitaires
//     std::string trim(const std::string &str) const;
//     void parseLine(const std::string &line, std::string &date, double &value) const;
// };