/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:42:24 by codespace         #+#    #+#             */
/*   Updated: 2025/04/22 20:47:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <string>
# include <iostream>

class ICharacter;

class AMateria
{
public:

	AMateria(void);
	AMateria(const std::string &type);
	AMateria(const AMateria &rhs);
	virtual ~AMateria(void);

	AMateria	&operator=(const AMateria &rhs);

	const std::string	&getType(void) const;
	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);

protected:

	std::string	_type;
};

#endif