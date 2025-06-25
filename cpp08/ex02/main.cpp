/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 14:41:59 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/24 17:04:11 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	std::cout << "||====== Subject test ======||\n" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << "\n||====== Std::list test =======||\n" << std::endl;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	return (0);

}

// *** class stack orignel simplifie ***

// template <class T, class Container = std::deque<T> >
// class stack
// {
// public:
//     typedef Container                                container_type;
//     typedef typename container_type::value_type      value_type;
//     typedef typename container_type::size_type       size_type;
//     typedef typename container_type::reference       reference;
//     typedef typename container_type::const_reference const_reference;

// protected:
//     container_type c;  // Le conteneur sous-jacent (deque par défaut)

// public:
//     // Constructeurs
//     explicit stack(const container_type& ctnr = container_type()) : c(ctnr) {}
//     stack(const stack& other) : c(other.c) {}
    
//     // Destructeur
//     ~stack() {}
    
//     // Opérateur d'assignation
//     stack& operator=(const stack& other) {
//         c = other.c;
//         return *this;
//     }
    
//     // Fonctions membres
//     bool empty() const { return c.empty(); }
//     size_type size() const { return c.size(); }
//     reference top() { return c.back(); }
//     const_reference top() const { return c.back(); }
//     void push(const value_type& val) { c.push_back(val); }
//     void pop() { c.pop_back(); }
// };