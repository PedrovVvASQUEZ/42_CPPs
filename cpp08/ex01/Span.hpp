/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:08:27 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/17 19:25:07 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <cstdlib>
# include <ctime>
# include <algorithm>
# include <stdexcept>
# include <iterator>

class	Span{

public:

	Span(unsigned int N);
	Span(const Span &rhs);
	~Span(void);

	Span	&operator=(const Span &rhs);

	unsigned int	getSize(void) const;
	unsigned int	getCapacity(void) const;
	void			addNumber(int N);
	unsigned int	shortestSpan(void) const;
	unsigned int	longestSpan(void) const;
	template <typename iT>
	void			fillVec(iT first, iT last)
	{
		size_t count = std::distance(first, last);
		if (_vec.size() + count > _vec_N_capacity)
			throw std::runtime_error("Cannot add elements: would exceed capacity");
		_vec.insert(_vec.end(), first, last);
	}

private:

	Span(void);
	std::vector<int>	_vec;
	unsigned int		_vec_N_capacity;
};

#endif