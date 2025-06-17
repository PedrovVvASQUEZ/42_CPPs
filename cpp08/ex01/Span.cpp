/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:08:25 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/17 19:23:00 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//==================== Contructors N Destructor ===================//

Span::Span(void) : _vec()
{
	return ;
}

Span::Span(unsigned int N) : _vec(), _vec_N_capacity(N)
{
	_vec.reserve(N);
	return ;
}

Span::Span(const Span &rhs) : _vec(rhs._vec), _vec_N_capacity(rhs._vec_N_capacity)
{
	return ;
}

Span::~Span(void)
{
	return ;
}

//=============== Operators Overload Member Functions =============//

Span	&Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->_vec = rhs._vec;
		this->_vec_N_capacity = rhs._vec_N_capacity;
	}
	return (*this);
}

//======================= Member functions ========================//

unsigned int	Span::getSize(void) const
{
	return (_vec.size());
}

unsigned int	Span::getCapacity(void) const
{
	return (_vec_N_capacity);
}

void	Span::addNumber(int N)
{
	if (this->_vec.size() >= this->_vec_N_capacity)
		throw std::runtime_error("Span is full");
	this->_vec.push_back(N);
}

unsigned int	Span::shortestSpan(void) const
{
	if (this->_vec.size() < 2)
		throw	std::runtime_error("Not enough element");
	std::vector<int> sortedVec = this->_vec;
	std::sort(sortedVec.begin(), sortedVec.end());
	unsigned int	minSpan = static_cast<unsigned int>(sortedVec[1] - sortedVec[0]);
	for (unsigned int i = 1; i < sortedVec.size() - 1; i++)
	{
		unsigned int	currentSpan = static_cast<unsigned int>(sortedVec[i + 1] - sortedVec[i]);
		if (currentSpan < minSpan)
			minSpan = currentSpan;
	}
	return (minSpan);
}


unsigned int	Span::longestSpan(void) const
{
	if (this->_vec.size() < 2)
		throw	std::runtime_error("Not enough element");
	std::vector<int>::const_iterator minIt = std::min_element(_vec.begin(), _vec.end());
	std::vector<int>::const_iterator maxIt = std::max_element(_vec.begin(), _vec.end());
	unsigned int	maxSpan = static_cast<unsigned int>(*maxIt - *minIt);
	return (maxSpan);
}