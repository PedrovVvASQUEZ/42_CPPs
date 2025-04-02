/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:03:14 by codespace         #+#    #+#             */
/*   Updated: 2025/04/02 16:46:52 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fxn(0)
{
	std::cout << "Default constructor called " << std::endl; 
	return ;
}

Fixed::Fixed(const int &n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fxn = n * pow(2, this->_nbits);
	return ;
}

Fixed::Fixed(const float &f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fxn = roundf(f * pow(2, _nbits));
	return ;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fxn = rhs.getRawBits();
	return (*this);
}


int		Fixed::getRawBits(void) const
{
	return (this->_fxn);
}

void	Fixed::setRawBits(const int raw)
{
	this->_fxn = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_fxn) / pow(2, _nbits));
}


int		Fixed::toInt(void) const
{
	return ((int)(this->_fxn) / pow(2, _nbits));
}


std::ostream	&operator<<(std::ostream &o, const Fixed &rhs)
{
	o << rhs.toFloat();
	return (o);
}

const int Fixed::_nbits = 8;
