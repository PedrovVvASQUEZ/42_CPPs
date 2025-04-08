/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 17:03:44 by pgrellie          #+#    #+#             */
/*   Updated: 2025/04/08 22:03:59 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_FPP

# include <iostream>
# include <cmath>

class	Fixed{

public:

	Fixed(void);
	Fixed(const int n);
	Fixed(const float f);
	Fixed(const Fixed &src);
	~Fixed(void);

	Fixed	&operator=(const Fixed &rhs);
	bool	operator>(const Fixed &rhs) const;
	bool	operator<(const Fixed &rhs) const;
	bool	operator>=(const Fixed &rhs) const;
	bool	operator<=(const Fixed &rhs) const;
	bool	operator==(const Fixed &rhs) const;
	bool	operator!=(const Fixed &rhs) const;
	Fixed	operator+(const Fixed &rhs) const;
	Fixed	operator-(const Fixed &rhs) const;
	Fixed	operator*(const Fixed &rhs) const;
	Fixed	operator/(const Fixed &rhs) const;
	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);

	int			getRawBits(void) const;
	void		setRawBits(const int raw);
	float		toFloat(void) const;
	int			toInt(void) const;
	static Fixed	&min(Fixed &x, Fixed &y);
	static const Fixed	&min(const Fixed &x, const Fixed &y);
	static Fixed	&max(Fixed &x, Fixed &y);
	static const Fixed	&max(const Fixed &x, const Fixed&y);

private:

	int					_fxn;
	static const int	_nbits;
};

std::ostream	&operator<<(std::ostream &o, const Fixed &rhs);

#endif