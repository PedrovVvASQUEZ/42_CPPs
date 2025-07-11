/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:52:36 by pgrellie          #+#    #+#             */
/*   Updated: 2025/07/10 18:19:25 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>
# include <iostream>

template <typename T>
T	&incrr(T &element)
{
	element += 2;
	return (element);
}

template <typename T>
void	displayElement(const T &element)
{
	std::cout << element << " | ";
}

template <typename ArrayType, size_t Size>
size_t	getArraysize(ArrayType (&)[Size])
{
	return (Size);
}

template <typename T, typename F>
void	iter(T *array, size_t length, F func)
{
	if (length == 0 || array == NULL)
		std::cout << "Array is empty nothing to be done" << std::endl;
	for (size_t i = 0; i < length; i++)
		func(array[i]); 
}

#endif