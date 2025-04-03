/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:03:42 by pgrellie          #+#    #+#             */
/*   Updated: 2025/04/03 19:29:31 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//==================== Contructors N Destructor ==================//

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

//=============== Operators Overload Member Functions =============//


Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fxn = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->_fxn > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->_fxn < rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (this->_fxn >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (this->_fxn <= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->_fxn == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (this->_fxn != rhs.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	Fixed	new_obj;

	new_obj._fxn = this->_fxn + rhs.getRawBits();
	return (new_obj);
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	return (Fixed(this->_fxn - rhs.getRawBits()));
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	return (Fixed(this->_fxn - rhs.getRawBits()));
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	return (Fixed(this->_fxn - rhs.getRawBits()));
}

/*****   Pre-crementation   *****/

Fixed	&Fixed::operator--(void)
{
	this->_fxn += 1;
	return (*this);
}

Fixed	&Fixed::operator++(void)
{
	this->_fxn += 1;
	return (*this);
}

/*****   Post-crementation  *****/

Fixed	Fixed::operator--(int)
{
	Fixed	old(*this);
	
	operator--();
	return (old);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old(*this);

	operator++();
	return (old);
}

//======================= Member functions ========================//


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

Fixed		&Fixed::min(Fixed &fx, Fixed &fy)
{
	return (fx <= fy ? fx : fy);
}

const Fixed		&Fixed::min(const Fixed &fx, const Fixed &fy)
{
	return (fx <= fy ? fx : fy);
}

Fixed		&Fixed::max(Fixed &fx, Fixed &fy)
{
	if (fx >= fy)
		return (fx);
	return (fy);
}

const Fixed		&Fixed::max(const Fixed &fx, const Fixed &fy)
{
	if (fx >= fy)
		return (fx);
	return (fy);
}

//======================== Out Class Funtions =====================//

std::ostream	&operator<<(std::ostream &o, const Fixed &rhs)
{
	o << rhs.toFloat();
	return (o);
}

//============= Const Static Variable Initialisation ==============//

const int Fixed::_nbits = 8;