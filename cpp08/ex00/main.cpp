/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:51:36 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/13 17:27:06 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <iterator>

int	main(void)
{
	std::vector<int> vec;
	vec.push_back(5); vec.push_back(9); vec.push_back(6);
	vec.push_back(3); vec.push_back(546); vec.push_back(48);
	
	std::list<int> lst;
	lst.push_back(1); lst.push_back(1); 
	lst.push_back(5); lst.push_back(4545448);

	try
	{
		std::list<int>::iterator it = ::easyfind(lst, 5);
		std::cout << "Found value : " << *it << " at position: "
			<< std::distance(lst.begin(), it) << " the adress is: "
			<< &(*it) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::vector<int>::iterator	itv = ::easyfind(vec, 546);
		std::cout << "Found value : " << *itv << " at position: "
			<< std::distance(vec.begin(), itv) << " the adress is: "
			<< &(*itv) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::list<int>::iterator	it = ::easyfind(lst, 88);
		std::cout << "Found value : " << *it << " at position: "
			<< std::distance(lst.begin(), it) << " the adress is: "
			<< &(*it) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}