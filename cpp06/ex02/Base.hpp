/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:23:56 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/05 13:54:22 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <ctime>
# include <cstdlib>
# include <iostream>

class	Base{

public:

	virtual	~Base(void);
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif