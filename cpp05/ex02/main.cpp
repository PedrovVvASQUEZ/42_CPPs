/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:42:30 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/23 18:09:07 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main(void)
{
	srand(time(NULL));

	std::cout << "|======== Presidential Tests ========|" << std::endl;
	{
		Bureaucrat	sss("Sandro", 6);
		AForm		*ppf = new PresidentialPardonForm("Sandro");

		sss.promotion();
		sss.signForm(*ppf); 
		
	}
	std::cout << "|========= Shrubbery Tests ==========|" << std::endl;

	std::cout << "|========== Robotomy Tests ==========|" << std::endl;

	
	return (0);
}