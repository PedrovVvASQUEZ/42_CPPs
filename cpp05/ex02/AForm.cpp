/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:42:07 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/20 17:57:12 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

//==================== Contructors N Destructor ===================//


AForm::AForm(void) : _name("nbr ???"), _signed(false), _rgrade(0), _rexec(0)
{
	return ;
}

AForm::AForm(const std::string name, const int rgrade, const int rexec) :
	_name(name), _signed(false), _rgrade(rgrade), _rexec(rexec)
{
	if (rgrade < 1 || rexec < 1)
		throw GradeTooHighException();
	else if (rgrade > 150 || rexec > 150)
		throw GradeTooLowException();
	return ;
}

AForm::AForm(const AForm &rhs) : _name(rhs._name), _signed(rhs._signed),
	_rgrade(rhs._rgrade), _rexec(rhs._rexec)
{
	return ;
}

AForm::~AForm(void)
{
	return ;
}

//=============== Operators Overload Member Functions =============//


AForm	&AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const AForm &rhs)
{
	o << "Form: " << rhs.getName() << std::endl
		<< "Signed: " << (rhs.getSignature() ? "yes" : "no") << std::endl
		<< "Required grade to sign: " << rhs.getRequireGrade() << std::endl
		<< "Required grade to execute: " << rhs.getExecutionGrade();
	return (o);
}

//======================= Member functions ========================//


std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSignature(void) const
{
	return (this->_signed);
}

int		AForm::getRequireGrade(void) const
{
	return (this->_rgrade);
}

int		AForm::getExecutionGrade(void) const
{
	return (this->_rexec);
}

void	AForm::beSigned(const Bureaucrat &rhs)
{
	if (rhs.getGrade() <= this->_rgrade)
		this->_signed = true;
	else
		throw GradeTooLowException();
	return ;
}