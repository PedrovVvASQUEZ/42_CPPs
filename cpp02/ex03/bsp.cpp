/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:47:04 by codespace         #+#    #+#             */
/*   Updated: 2025/04/08 16:54:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point c, Point const point)
{
	float	res1;
	float	res2;
	float	res3;

	res1 = Point::vectorialProduct(point, a, b);
	res2 = Point::vectorialProduct(point, b, c);
	res3 = Point::vectorialProduct(point, c, a);

	return ((res1 < 0 && res2 < 0 && res3 < 0)
			|| (res1 > 0 && res2 > 0 && res3 > 0));
}