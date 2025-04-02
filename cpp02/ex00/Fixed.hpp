/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:42:04 by codespace         #+#    #+#             */
/*   Updated: 2025/04/02 14:41:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_FPP

#include <iostream>

class	Fixed{

public:

	Fixed(void);
	Fixed(const Fixed &src);
	~Fixed(void);

	Fixed	&operator=(const Fixed &rhs);

	int		getRawBits(void) const;
	void	setRawBits(const int raw);

private:

	int					_fxn;
	static const int	_nbits;
};


#endif