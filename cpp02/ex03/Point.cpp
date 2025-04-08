/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:35:58 by codespace         #+#    #+#             */
/*   Updated: 2025/04/08 00:31:19 by codespace        ###   ########.fr       */
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
	if (this != &rhs)
	{
		this->_x = rhs._x;
		this->_y = rhs._y;
	}
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

//======================== Out Class Funtions =====================//


std::ostream	&operator<<(std::ostream &o, const Point  &rhs)
{
	o << "coordinate: (" << rhs.getX() << ", " << rhs.getY() << ")" << std::endl;
	return (o);
}