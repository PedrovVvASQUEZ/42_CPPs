/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:23:51 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/05 13:58:58 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(void)
{
	srand(time(NULL));
	Base	*p;
	
	std::cout << "Generating ABC Base ..." << std::endl;
	p = generate();
	std::cout << "Pointer based identification: ";
	identify(p);
	std::cout << "Reference based identificaiton: ";
	identify(*p);
	return (0);
}