/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:01:23 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/26 18:17:39 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

//==================== Contructors N Destructor ===================//

Intern::Intern(void)
{
	return ;
}

Intern::Intern(const Intern &rhs)
{
	(void)rhs;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

//=============== Operators Overload Member Functions =============//

Intern	&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

//======================= Member functions ========================//

AForm	*Intern::makeForm(std::string fname, std::string ftarget) const
{
	std::string FormNames[3] = {"Presidential",
			"Shrubbery", "Robotomy"};
	int			index = -1;
	for (int i = 0; i < 3; i++)
	{
		if (fname == FormNames[i])
		{
			index = i;
			break ;
		}
	}
	switch (index)
	{
		case 0:
			std::cout << "Intern creates " << fname << std::endl;
			return (new PresidentialPardonForm(ftarget));
		case 1:
			std::cout << "Intern creates " << fname << std::endl;
			return (new ShrubberyCreationForm(ftarget));
		case 2:
			std::cout << "Intern creates " << fname << std::endl;
			return (new RobotomyRequestForm(ftarget));
		default:
			throw FormNotFound();
	}
}