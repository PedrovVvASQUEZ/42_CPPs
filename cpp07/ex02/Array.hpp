/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:47:44 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/11 18:23:04 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class	Array{

public:

	Array(void) : _array(NULL), _size(0){}
	Array(unsigned int n) : _array(new T [n]), _size(n){}
	Array(const Array &rhs) : _array(NULL), _size(rhs._size)
	{
		if (this->_size > 0)
		{
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];
		}
	}
	~Array(void){ delete [] this->_array; }

	Array	&operator=(const Array &rhs)
	{
		if (this != &rhs)
		{
			delete [] this->_array;
			this->_size = rhs._size;
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
			{
				this->_array[i] = rhs._array[i]; 
			}
		}
		return (*this)
	}

	unsigned int	size(void) const
	{
		return (this->_size);
	}

private:

	T				*_array;
	unsigned int	_size;
};


#endif