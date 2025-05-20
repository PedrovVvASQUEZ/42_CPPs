/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:41:58 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/20 18:14:59 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//==================== Contructors N Destructor ===================//


PresidentialPardonForm::PresidentialPardonForm(void) :
	AForm("PresidentialPardonForm", 25, 5), _target("Unknown")
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
	AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) :
	AForm(rhs), _target(rhs._target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

//=============== Operators Overload Member Functions =============//


PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

//======================= Member functions ========================//


void	PresidentialPardonForm::beSigned(const Bureaucrat &rhs)
{
	if (rhs.getGrade() <= this->_rgrade)
		this->_signed = true;
	else
		throw GradeTooLowException();
	return ;
}