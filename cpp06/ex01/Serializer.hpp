/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 15:04:50 by pgrellie          #+#    #+#             */
/*   Updated: 2025/07/07 17:54:47 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <string>
# include <iostream>
# include <stdint.h>

struct Data
{
	int			value;
	std::string	str;
};

class	Serializer{

public:

	static uintptr_t		serialize(Data *ptr);
	static Data				*deserialize(uintptr_t raw);

private:

	Serializer(void);
	Serializer(const Serializer &rhs);
	~Serializer(void);

	Serializer	&operator=(const Serializer &rhs);
};

#endif