/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:42:00 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/22 18:07:37 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

//==================== Contructors N Destructor ===================//


RobotomyRequestForm::RobotomyRequestForm(void) :
	AForm("RobotomyRequestForm", 72, 45), _target("Unknown")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
	AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) :
	AForm(rhs), _target(rhs._target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

//=============== Operators Overload Member Functions =============//


RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

//======================= Member functions ========================//


void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (this->getSignature() == false)
		throw AForm::ExecuteNotSigned();
	else if (this->getExecutionGrade() < executor.getGrade())
		throw AForm::GradeTooLowException();
	else
	{
		int	robotomized;

		std::cout << "*rizZzzz BzzZz rZz* ";
		robotomized = rand() % 2;
		if (robotomized)
			std::cout << this->_target << " was robotomized" << std::endl;
		else
			std::cout << this->_target << " was not robotomized" << std::endl;
	}
}
