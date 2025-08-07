/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:35:25 by pgrellie          #+#    #+#             */
/*   Updated: 2025/08/07 18:46:22 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <algorithm>
# include <map>
# include <string>



class BitcoinExchange{

public:

	BitcoinExchange(void);
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &rhs);
	~BitcoinExchange(void);

private:

	std::map<>	_map;
};

#endif