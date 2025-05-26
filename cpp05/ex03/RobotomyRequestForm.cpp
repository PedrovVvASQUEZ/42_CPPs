/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:42:00 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/26 16:21:54 by pgrellie         ###   ########.fr       */
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
		throw AForm::FormNotSigned();
	else if (this->getExecutionGrade() < executor.getGrade())
		throw AForm::GradeTooLowException();
	else
	{
		int	robotomized;

		std::cout << " *Brrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr* ";
		robotomized = rand() % 2;
		if (robotomized)
			std::cout << RED << this->_target << " was robotomized" << END << std::endl;
		else
			std::cout << RED << this->_target << " was not robotomized" << END << std::endl;
	}
}
