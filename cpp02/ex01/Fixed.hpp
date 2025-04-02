/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:02:49 by codespace         #+#    #+#             */
/*   Updated: 2025/04/02 16:41:58 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_FPP

#include <iostream>
#include <cmath>

class	Fixed{

public:

	Fixed(void);
	Fixed(const int &n);
	Fixed(const float &f);
	Fixed(const Fixed &src);
	~Fixed(void);

	Fixed	&operator=(const Fixed &rhs);

	int		getRawBits(void) const;
	void	setRawBits(const int raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int					_fxn;
	static const int	_nbits;
};

std::ostream	&operator<<(std::ostream &o, const Fixed &rhs);

#endif