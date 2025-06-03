/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:23:56 by pgrellie          #+#    #+#             */
/*   Updated: 2025/06/03 17:11:50 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

class	Base{

public:

	virtual	~Base(void);
	
	Base	*generate(void);
	void	identify(Base *p);
	void	identify(Base &p);

private:

	Base(void);
	Base(const Base &rhs);
	Base	&operator=(const Base &rhs);
};

#endif