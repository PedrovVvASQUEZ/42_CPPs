/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 17:43:46 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/10 15:49:41 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template <typename J>
void	swap(J &x, J &y)
{
	J	temp;

	temp = x;
	x = y;
	y = temp;
}

template <typename J>
const J	&max(const J &x, const J &y)
{
	return (x > y ? x : y);
}

template <typename J>
const J &min(const J &x, const J &y)
{
	return (x < y ? x : y);
}

#endif