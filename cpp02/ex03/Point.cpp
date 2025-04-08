/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:35:58 by codespace         #+#    #+#             */
/*   Updated: 2025/04/08 22:51:58 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//==================== Contructors N Destructor ==================//

Point::Point(void) : _x(0), _y(0)
{
	return ;
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
	return ;
}

Point::Point(const Point &src)
{
	*this = src;
	return ;
}

Point::~Point(void)
{
	return ;
}

//=============== Operators Overload Member Functions =============//


Point	&Point::operator=(const Point &rhs)
{
	(void)rhs;

	return (*this);
}

//======================= Member functions ========================//


Fixed	Point::getX(void) const
{
	return (this->_x);
}

Fixed	Point::getY(void) const
{
	return (this->_y);
}

float	Point::vectorialProduct(const Point &point, const Point &a, const Point &b)
{
	Fixed	res;

	res = ((point.getX() - b.getX()) * (a.getY() - b.getY()))
			- ((a.getX() - b.getX()) * (point.getY() - b.getY()));
	return (res.toFloat());
}

//======================== Out Class Funtions =====================//


std::ostream	&operator<<(std::ostream &o, const Point  &rhs)
{
	o << ": (" << rhs.getX() << ", " << rhs.getY() << ")" << std::endl;
	return (o);
}