/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 18:08:25 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/13 18:10:32 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "stdexcept"

//==================== Contructors N Destructor ===================//

Span::Span(void) : _vec()
{
	return ;
}

Span::Span(unsigned int N) : _vec(N, 0)
{
	return ;
}

Span::Span(const Span &rhs) : _vec(rhs._vec)
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
	}
	return (*this);
}

//======================= Member functions ========================//

void	Span::addNumber(int N)
{
	if (this->_vec.size() >= this->_vec.capacity())
		throw std::runtime_error("Span is full");
	this->_vec.push_back(N);
}

void	Span::fillVec(unsigned int N)
{
	if (N > this->_vec.capacity())
		throw std::runtime_error("cannot fill more than capacity");
	while (this->_vec.size() < N)
		this->addNumber(std::rand());
}

std::vector<unsigned int>::iterator	Span::shortestSpan(std::vector<unsigned int> &vec) const
{
	
}


std::vector<unsigned int>::iterator Span::longestSpan(std::vector<unsigned int> &vec) const
{
	
}