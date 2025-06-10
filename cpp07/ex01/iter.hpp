/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:52:36 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/10 18:51:31 by pgrellie         ###   ########.fr       */
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

template <typename J, size_t N>
size_t	getArraysize(J (&)[N])
{
	return (N);
}

template <typename J, typename F>
void	iter(J *array, size_t length, F func)
{
	for (int i = 0; i < length; i++)
		func(array[i]); 
}


#endif