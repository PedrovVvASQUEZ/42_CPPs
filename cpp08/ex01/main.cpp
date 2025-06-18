/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:08:30 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/18 17:57:24 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <limits>

int main()
{
	std::cout << "||========== Subject Tests =========||" << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "||===== Tests with iterators range =====||" << std::endl;
	{
		srand(time(NULL));
		Span sp = Span(10000);
		std::vector<int>	vec;
		for (unsigned int i = 0; i < 10000; i++)
			vec.push_back(std::rand());
		try
		{
			sp.fillVecSpan(vec.begin(), vec.end());
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			sp.addNumber(167);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "||=== Other Tests with iterators range ===||" << std::endl;
	{
		srand(time(NULL));
		Span sp = Span(10000);
		std::vector<int>	vec;
		for (unsigned int i = 0; i < 10000; i++)
			vec.push_back(std::rand());
		std::vector<int>	vecttt;
		for (unsigned int i = 0; i < 5000; i++)
			vecttt.push_back(std::rand());
		try
		{
			sp.fillVecSpan(vec.begin(), vec.end());
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
			sp.fillVecSpan(vecttt.begin(), vecttt.end());
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "||======= Tests with max capacity ========|| << std::endl" << std::endl;
	{
		srand(time(NULL));
		Span sp = Span(100000);
		std::vector<int>	vec;
		for (unsigned int i = 0; i < 100000; i++)
			vec.push_back(std::rand());
		try
		{
			sp.fillVecSpan(vec.begin(), vec.end());
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}