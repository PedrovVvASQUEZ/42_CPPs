/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:03:42 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/05 16:36:40 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//==================== Contructors N Destructor ==================//

Fixed::Fixed(void) : _fxn(0)
{
	return ;
}

Fixed::Fixed(const int n) : _fxn(n << _nbits)
{
	return ;
}

Fixed::Fixed(const float f) : _fxn(roundf(f * pow(2.0f, _nbits)))
{
	return ;
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

//=============== Operators Overload Member Functions =============//


Fixed	&Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
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

	new_obj._fxn = this->toFloat() + rhs.toFloat();
	return (new_obj);
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

/*****   Pre-crementation   *****/

Fixed	&Fixed::operator--(void)
{
	this->_fxn -= 1;
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
	return ((float)(this->_fxn) / (1 << _nbits));
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