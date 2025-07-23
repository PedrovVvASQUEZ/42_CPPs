/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 17:43:46 by pgrellie          #+#    #+#             */
/*   Updated: 2025/07/23 17:24:20 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template <typename T>
void	swap(T &x, T &y)
{
	T	temp;

	temp = x;
	x = y;
	y = temp;
}

template <typename T>
const T	&max(const T &x, const T &y)
{
	return (x > y ? x : y);
}

template <typename T>
const T &min(const T &x, const T &y)
{
	return (x < y ? x : y);
}

#endif