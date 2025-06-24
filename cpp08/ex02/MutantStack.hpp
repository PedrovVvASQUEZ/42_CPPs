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

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_itertor;

protected:

	

	
private:

	
};

#endif