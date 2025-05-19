/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:02:08 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/19 16:35:10 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "|| Standard Tests ||" << std::endl << std::endl;
	Bureaucrat	ggg("Fillon", 2);

	std::cout << ggg << std::endl;
	ggg.punition();
	std::cout << ggg << std::endl;
	ggg.promotion();
	std::cout << ggg << std::endl;


	std::cout << "\n|| Limit Tests ||" << std::endl << std::endl;
	Bureaucrat	jjj("Yamal", 1);

	try
	{
		std::cout << jjj << std::endl;
		jjj.promotion();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat	yyy("Bayrou", 150);
	
	try
	{
		std::cout << yyy << std::endl;
		yyy.punition();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n|| Constructor Limit Tests ||" << std::endl << std::endl;

	try
	{
		Bureaucrat	macron("Macron", 151);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat	asce("A$CE", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}