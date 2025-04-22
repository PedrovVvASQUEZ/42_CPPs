/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:19:51 by codespace         #+#    #+#             */
/*   Updated: 2025/04/22 20:27:37 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


//==================== Contructors N Destructor ===================//

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < _mat_nb; i++)
		_mat[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
	*this = rhs;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < _mat_nb; i++)
		if (_mat[i])
			delete (_mat[i]);
	return ;
}


//=============== Operators Overload Member Functions =============//

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < _mat_nb; i++)
		{
			if (_mat[i])
				delete _mat[i];
			if (rhs._mat[i])
				_mat[i] = rhs._mat[i]->clone();
			else
				_mat[i] = NULL;
		}
	}
	return (*this);
}


//======================= Member functions ========================//

void	MateriaSource::learnMateria(AMateria *mat)
{
	for (int i = 0; i < _mat_nb; i++)
	{
		if (_mat[i] == NULL)
		{
			_mat[i] = mat;
			std::cout << mat->getType() << " learned on memory " << i << std::endl;
			return ;
		}
	}
	std::cout << "No enough memory" << std::endl;
	delete (mat);
	return ;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < _mat_nb; i++)
	{
		if (_mat[i] != NULL && _mat[i]->getType() == type)
			return (_mat[i]->clone());
	}
	return (NULL);
}
