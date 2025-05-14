/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:33:09 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/14 18:14:54 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//==================== Contructors N Destructor ===================//


Bureaucrat::Bureaucrat(void) : _name("John Doe"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(const std::string name) : _name(name), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name)
{
	if (grade < 1 || grade > 150)
		throw BadGradeException();
	else
		_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) : _name(rhs._name), _grade(rhs._grade)
{
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

//=============== Operators Overload Member Functions =============//

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
	}
	return (*this);
}

//======================= Member functions ========================//


std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::promotion(void)
{
	if (this->_grade > 1)
		this->_grade -= 1;
	return ;
}

void	Bureaucrat::punition(void)
{
	if (this->_grade < 150)
		this->_grade += 1;
	return ;
}

