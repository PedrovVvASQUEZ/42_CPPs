/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:02:08 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/19 16:44:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Form 		f("Form nbr 01", 10, 4);
	Bureaucrat	melanchon("melanchon", 11);

	std::cout << f << std::endl << std::endl;
	std::cout << melanchon << std::endl;
	
	melanchon.signForm(f);
	melanchon.promotion();
	std::cout << melanchon.getName() << " gets a promotion !!\n" << std::endl;
	melanchon.signForm(f);

	std::cout << std::endl << f << std::endl;

	return (0);
}