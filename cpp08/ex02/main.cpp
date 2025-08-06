/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 14:41:59 by pgrellie          #+#    #+#             */
/*   Updated: 2025/08/06 15:47:17 by pgrellie         ###   ########.fr       */
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

// *** class stack originelle simplifie ***

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


// *** class deque originelle simplifie ***


// template <class T, class Allocator = std::allocator<T>>
// class deque {
// public:
//     // Types
//     typedef T                                        value_type;
//     typedef Allocator                                allocator_type;
//     typedef typename allocator_type::reference       reference;
//     typedef typename allocator_type::const_reference const_reference;
//     typedef typename allocator_type::pointer         pointer;
//     typedef typename allocator_type::const_pointer   const_pointer;
//     typedef typename allocator_type::size_type       size_type;
//     typedef typename allocator_type::difference_type difference_type;
    
//     // Iterators
//     typedef implementation_defined                   iterator;
//     typedef implementation_defined                   const_iterator;
//     typedef std::reverse_iterator<iterator>          reverse_iterator;
//     typedef std::reverse_iterator<const_iterator>    const_reverse_iterator;

//     // Constructeurs
//     explicit deque(const allocator_type& alloc = allocator_type());
//     explicit deque(size_type n, const value_type& val = value_type(), 
//                    const allocator_type& alloc = allocator_type());
//     template <class InputIterator>
//     deque(InputIterator first, InputIterator last, 
//           const allocator_type& alloc = allocator_type());
//     deque(const deque& x);
    
//     // Destructeur
//     ~deque();
    
//     // Opérateur d'assignation
//     deque& operator=(const deque& x);
    
//     // Iterators
//     iterator               begin();
//     const_iterator         begin() const;
//     iterator               end();
//     const_iterator         end() const;
//     reverse_iterator       rbegin();
//     const_reverse_iterator rbegin() const;
//     reverse_iterator       rend();
//     const_reverse_iterator rend() const;
//     const_iterator         cbegin() const;  // C++11
//     const_iterator         cend() const;    // C++11
    
//     // Capacity
//     size_type size() const;
//     size_type max_size() const;
//     void      resize(size_type n, value_type val = value_type());
//     bool      empty() const;
//     void      shrink_to_fit();  // C++11
    
//     // Element access
//     reference       operator[](size_type n);
//     const_reference operator[](size_type n) const;
//     reference       at(size_type n);
//     const_reference at(size_type n) const;
//     reference       front();
//     const_reference front() const;
//     reference       back();
//     const_reference back() const;
    
//     // Modifiers
//     template <class InputIterator>
//     void assign(InputIterator first, InputIterator last);
//     void assign(size_type n, const value_type& val);
    
//     void push_back(const value_type& val);
//     void push_front(const value_type& val);
//     void pop_back();
//     void pop_front();
    
//     iterator insert(iterator position, const value_type& val);
//     void     insert(iterator position, size_type n, const value_type& val);
//     template <class InputIterator>
//     void     insert(iterator position, InputIterator first, InputIterator last);
    
//     iterator erase(iterator position);
//     iterator erase(iterator first, iterator last);
//     void     swap(deque& x);
//     void     clear();
    
//     // Emplace functions (C++11)
//     template <class... Args>
//     void emplace_back(Args&&... args);
//     template <class... Args>
//     void emplace_front(Args&&... args);
//     template <class... Args>
//     iterator emplace(const_iterator position, Args&&... args);

//     // Allocator
//     allocator_type get_allocator() const;

// private:
//     // Structure interne complexe avec des blocs de mémoire
//     // Généralement implémentée avec un tableau de pointeurs vers des blocs
//     // permettant l'accès O(1) et l'insertion/suppression O(1) aux extrémités
// };