/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:52:36 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/11 15:44:27 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>

template <typename J>
J	&incrr(J &element)
{
	element += 2;
	return (element);
}

template <typename J>
void	displayElement(const J &element)
{
	std::cout << element << " | ";
}

template <typename ArrayType, size_t Size>
size_t	getArraysize(ArrayType (&array)[Size])
{
	return (Size);
}

template <typename J, typename F>
void	iter(J *array, size_t length, F func)
{
	if (length == 0 || array == NULL)
		std::cout << "Array is empty nothing to be done" << std::endl;
	for (int i = 0; i < length; i++)
		func(array[i]); 
}

#endif