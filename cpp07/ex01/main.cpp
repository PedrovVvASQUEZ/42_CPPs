/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:52:30 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/11 15:28:44 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int			array[] = {1, 2, 3, 4, 5, 5, 6};
	std::string	huhu[] = {"tybe", "loco", "quetocoro"};
	const char		*str[] = {"zebiiiii", "lalala", "incoco"};
	float		fl[] = {2.0, 5.3, 8.67};
	char		carac[] = {'a', 'b', 't', 'o'};
	int			emp_array[0] = {};

	std::cout << "||======= Int array tests ========||" << std::endl;
	::iter(array, ::getArraysize(array), ::displayElement<int>);
	std::cout << std::endl << std::endl;
	::iter(array, ::getArraysize(array), ::incrr<int>);
	::iter(array, ::getArraysize(array), ::displayElement<int>);
	std::cout << std::endl << std::endl;
	std::cout << "||======= std::string array tests ========||" << std::endl;
	::iter(huhu, ::getArraysize(huhu), ::displayElement<std::string>);
	std::cout << std::endl << std::endl;
	::iter(huhu, ::getArraysize(huhu), ::incrr<std::string>);
	::iter(huhu, ::getArraysize(huhu), ::displayElement<std::string>);
	std::cout << std::endl << std::endl;
	std::cout << "||======= Char * array tests ========||" << std::endl;
	::iter(str, ::getArraysize(str), ::displayElement<const char *>);
	std::cout << std::endl << std::endl;
	std::cout << "||======= Float array tests ========||" << std::endl;
	::iter(fl, ::getArraysize(fl), displayElement<float>);
	std::cout << std::endl << std::endl;
	::iter(fl, ::getArraysize(fl), ::incrr<float>);
	::iter(fl, ::getArraysize(fl), ::displayElement<float>);
	std::cout << std::endl << std::endl;
	std::cout << "||======= Char array tests ========||" << std::endl;
	::iter(carac, ::getArraysize(carac), displayElement<char>);
	std::cout << std::endl << std::endl;
	std::cout << "||======= Empty array tests ========||" << std::endl;
	::iter(emp_array, 0, displayElement<int>);

	return (0);
}