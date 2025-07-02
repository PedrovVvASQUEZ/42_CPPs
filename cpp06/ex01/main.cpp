/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:04:54 by pgrellie          #+#    #+#             */
/*   Updated: 2025/07/02 18:24:54 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data	*ogptr = new Data;
	ogptr->value = 42;
	ogptr->str = "this is a test";

	std::cout << "||=====og values check=====||" << std::endl;
	std::cout << ogptr->value << std::endl;
	std::cout << ogptr->str << std::endl;
	
	unsigned long	serialized = Serializer::serialize(ogptr);

	std::cout << "Serial int: " << serialized << std::endl;

	Data		*deserialized = Serializer::deserialize(serialized);

	std::cout << "||=====des values check=====||" << std::endl;
	std::cout << deserialized->value << std::endl;
	std::cout << deserialized->str << std::endl;

	std::cout << "og ptr: " << ogptr << std::endl;
	std::cout << "Deserialized ptr: " << deserialized << std::endl;
	std::cout << "Comparison: " << (ogptr == deserialized) << std::endl;
	delete (ogptr);
	serialized = 0;
	std::cout << "Serial int: " << serialized << std::endl;
	deserialized = NULL;
	std::cout << "Deserialized ptr: " << deserialized << std::endl;

	return (0);
}