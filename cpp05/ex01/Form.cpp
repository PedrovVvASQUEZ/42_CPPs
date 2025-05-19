/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:01:20 by codespace         #+#    #+#             */
/*   Updated: 2025/05/19 16:38:12 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//==================== Contructors N Destructor ===================//


Form::Form(void) : _name("nbr ???"), _signed(false), _rgrade(0), _rexec(0)
{
	return ;
}

Form::Form(const std::string name, const int rgrade, const int rexec) :
	_name(name), _signed(false), _rgrade(rgrade), _rexec(rexec)
{
	if (rgrade < 1 || rexec < 1)
		throw GradeTooHighException();
	else if (rgrade > 150 || rexec > 150)
		throw GradeTooLowException();
	return ;
}

Form::Form(const Form &rhs) : _name(rhs._name), _signed(rhs._signed),
	_rgrade(rhs._rgrade), _rexec(rhs._rexec)
{
	return ;
}

Form::~Form(void)
{
	return ;
}

//=============== Operators Overload Member Functions =============//


Form	&Form::operator=(const Form &rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Form &rhs)
{
	o << "Form: " << rhs.getName() << std::endl
		<< "Signed: " << (rhs.getSignature() ? "yes" : "no") << std::endl
		<< "Required grade to sign: " << rhs.getRequireGrade() << std::endl
		<< "Required grade to execute: " << rhs.getExecutionGrade();
	return (o);
}

//======================= Member functions ========================//


std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSignature(void) const
{
	return (this->_signed);
}

int		Form::getRequireGrade(void) const
{
	return (this->_rgrade);
}

int		Form::getExecutionGrade(void) const
{
	return (this->_rexec);
}

void	Form::beSigned(const Bureaucrat &rhs)
{
	if (rhs.getGrade() <= this->_rgrade)
		this->_signed = true;
	else
		throw GradeTooLowException();
	return ;
}