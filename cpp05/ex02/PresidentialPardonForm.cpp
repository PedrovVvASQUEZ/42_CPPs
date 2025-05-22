/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:41:58 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/22 17:48:00 by codespace        ###   ########.fr       */
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

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (this->getSignature() == false)
		throw AForm::ExecuteNotSigned();
	else if (this->getExecutionGrade() < executor.getGrade())
		throw AForm::GradeTooLowException();
	else
		std::cout << this->_target << " was forgiven by Zafor Beeblebrox" << std::endl;
}