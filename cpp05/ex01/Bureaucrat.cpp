/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:33:09 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/19 16:40:23 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//==================== Contructors N Destructor ===================//


Bureaucrat::Bureaucrat(void) : _name("John Doe"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
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

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
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
	if (this->_grade == 1)
		throw GradeTooHighException();
	else
		this->_grade -= 1;
	return ;
}

void	Bureaucrat::punition(void)
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	else
		this->_grade += 1;
	return ;
}

void	Bureaucrat::signForm(Form &rhs) const
{
	try
	{
		rhs.beSigned(*this);
		std::cout << this->_name << " signed " << rhs.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " couldn't sign "
			<< rhs.getName() << " because" << e.what() << std::endl;
	}
}

