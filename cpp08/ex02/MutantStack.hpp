/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 14:41:56 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/24 19:13:25 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>

template <typename T>
class	MutantStack: public std::stack<T>{

public :

	MutantStack(void) : std::stack<T>(){}
	MutantStack(const MutantStack &rhs) : std::stack<T>(rhs){}
	~MutantStack(void){}

	MutantStack	&operator=(const MutantStack &rhs)
	{
		if (this != &rhs)
			std::stack<T>::operator=(rhs);
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator	begin(void)
	{
		return (this->c.begin());
	}

	iterator	end(void)
	{
		return (this->c.end());
	}

	const_iterator	begin(void) const
	{
		return (this->c.begin());
	}

	const_iterator	end(void) const
	{
		return (this->c.end());
	}

	reverse_iterator	rbegin(void)
	{
		return (this->c.rbegin());
	}

	reverse_iterator	rend(void)
	{
		return (this->c.rend());
	}

	const_reverse_iterator	rbegin(void) const
	{
		return (this->rbegin());
	}

	const_reverse_iterator	rend(void) const
	{
		return (this->c.rend());
	}
};

#endif