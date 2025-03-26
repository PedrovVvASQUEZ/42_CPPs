/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:12:31 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/25 18:17:05 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	str;
	std::string *ptr;
	std::string &ref = str;

	str = "HI THIS IS BRAIN";
	ptr = &str;
	std::cout << "======= Adresses =======" << std::endl;
	std::cout << "string adress: " << &str << std::endl;
	std::cout << "pointer adress: " << ptr << std::endl;
	std::cout << "reference adress: " << &ref << std::endl;
	std::cout << std::endl << "======= Values =======" << std::endl;
	std::cout << "value of the string: " << str << std::endl;
	std::cout << "value of the pointer: " << *ptr << std::endl;
	std::cout << "value of the reference: " << ref << std::endl;

	return (0);
}