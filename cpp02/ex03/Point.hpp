/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:36:00 by codespace         #+#    #+#             */
/*   Updated: 2025/04/08 16:21:15 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point{

public:

	Point(void);
	Point(const float x, const float _y);
	Point(const Point &src);
	~Point(void);

	Point	&operator=(const Point &rhs);

	Fixed			getX(void) const;
	Fixed			getY(void) const;
	static float	vectorialProduct(const Point &a,
						const Point &b, const Point &c);

private:

	Fixed	_x;
	Fixed	_y;
};

bool			bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream	&operator<<(std::ostream &o, const Point &rhs);
#endif