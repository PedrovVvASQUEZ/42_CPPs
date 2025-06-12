/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:47:49 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/12 16:20:41 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	Array<int>			badshit;
	Array<std::string>	ezshit(5);
	Array<std::string>	bracata(ezshit);

	std::cout << "Badshit size is: " << badshit.size() << std::endl;
	std::cout << "Ezshit size is: " << ezshit.size() << std::endl;
	std::cout << "Bracata size is: " << bracata.size() << std::endl << std::endl;
	
	try
	{
		bracata[1] = "huewx";
		bracata[2] = "euvyc";
		bracata[3] = "iiweuiwt";
		bracata[4] = "udeuduew";
		bracata[0] = "wbfieiuevcu";
	
		std::cout << bracata[0] << std::endl;
		std::cout << bracata[1] << std::endl;
		std::cout << bracata[2] << std::endl;
		std::cout << bracata[3] << std::endl;
		std::cout << bracata[4] << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		badshit[0] = 4;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return(0);
}