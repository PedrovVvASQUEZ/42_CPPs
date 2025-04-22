/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 23:20:37 by codespace         #+#    #+#             */
/*   Updated: 2025/04/22 13:30:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <string>
# include <iostream>

class	Character : public ICharacter{

public:

	Character(void);
	Character(const std::string &name);
	Character(const Character &rhs);
	virtual ~Character(void);

	Character	&operator=(const Character &rhs);
	
	virtual const std::string	&getName(void) const;
	virtual void				equip(AMateria *type);
	virtual void				unequip(int index);
	virtual void				use(int idx, ICharacter &target);

protected:

	static const int	_items_nb = 4;
	std::string			_name;
	AMateria			*_items[_items_nb];
};

#endif
