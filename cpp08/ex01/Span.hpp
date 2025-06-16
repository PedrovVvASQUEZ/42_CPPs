/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:08:27 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/13 18:08:50 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <cstdlib>
# include <ctime>

class	Span{

public:

	Span(unsigned int N);
	Span(const Span &rhs);
	~Span(void);

	Span	&operator=(const Span &rhs);

	void								addNumber(int N);
	void								fillVec(unsigned int N);
	std::vector<unsigned int>::iterator	shortestSpan(std::vector<unsigned int> &vec) const;
	std::vector<unsigned int>::iterator longestSpan(std::vector<unsigned int> &vec) const;

private:

	Span(void);
	std::vector<unsigned int>	_vec;
};

#endif