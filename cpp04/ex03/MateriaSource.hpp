/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:00:53 by codespace         #+#    #+#             */
/*   Updated: 2025/04/22 14:28:07 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource{

public:

	MateriaSource(void);
	MateriaSource(const MateriaSource &rhs);
	virtual ~MateriaSource(void);

	MateriaSource	&operator=(const MateriaSource &rhs);

	void		learnMateria(AMateria *mat);
	AMateria	*createMateria(const std::string &type);

protected:

	static const int	_mat_nb = 4;
	AMateria			*_mat[_mat_nb];
};

#endif