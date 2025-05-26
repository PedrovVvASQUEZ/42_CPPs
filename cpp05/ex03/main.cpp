/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:42:30 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/26 18:11:58 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	srand(time(NULL));
	Intern	loup;
	
	std::cout << "|======== Presidential Tests ========|" << std::endl << std::endl;
	try
	{
		Bureaucrat	sss("Sandro", 6);
		AForm	*ppf = loup.makeForm("Presidential", "Sandro");

		std::cout << *ppf << std::endl << std::endl;
		std::cout << sss << std::endl;
		sss.signForm(*ppf); 
		sss.promotion();
		sss.executeForm(*ppf);
		delete (ppf);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n|========= Shrubbery Tests ==========|" << std::endl << std::endl;
	try
	{
		Bureaucrat	kkk("Karim", 136);
		AForm		*stf = loup.makeForm("Shrubbery", "Karim");
		Bureaucrat	stupid_mf("MF", 146);

		std::cout << *stf << std::endl << std::endl;
		std::cout << kkk << std::endl;
		kkk.signForm(*stf);
		kkk.promotion();
		kkk.executeForm(*stf);
		stupid_mf.executeForm(*stf);
		delete(stf);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n|========== Robotomy Tests ==========|" << std::endl << std::endl;
	try
	{
		Bureaucrat	ttt("Thomas", 42);
		AForm		*rrf = loup.makeForm("Robotomy", "Thomas");

		std::cout << *rrf << std::endl << std::endl;
		std::cout << ttt << std::endl;
		ttt.signForm(*rrf);
		ttt.promotion();
		ttt.executeForm(*rrf);
		delete(rrf);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}