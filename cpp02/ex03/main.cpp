/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 16:50:34 by pgrellie          #+#    #+#             */
/*   Updated: 2025/04/08 17:39:37 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

std::string	boolToString(bool tf)
{
	if (tf == true)
		return ("inside");
	return ("outside");
}

int	main(void)
{
	Point	a(4, 6);
	Point	b(8, -6);
	Point	c(2.33, 5.331);
	Point	Pa(4, 3);
	Point	Pb(19, 17);

	std::cout << "Point a" << a << "Point b"
				<< b << "Point c" << c << std::endl;
	std::cout << "Is Pa" << Pa << "Inside the triangle (a, b, c) ?" << std::endl
				<< "Answer: " << boolToString(bsp(a, b, c, Pa)) << std::endl;
	std::cout << "Is Pb" << Pb << "Inside the triangle (a, b, c) ?" << std::endl
				<< "Answer: " << boolToString(bsp(a, b, c, Pb)) << std::endl;
	return (0);
}