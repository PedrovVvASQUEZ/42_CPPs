/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:41:54 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/12 17:55:29 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>
# include <cstdlib>
# include <cctype>

class PhoneBook{
	
public:

	void	addContact(const Contact &new_contact);
	bool	searchContact(void) const;
	PhoneBook(void);
	~PhoneBook(void);

private:

	Contact	list[8];
	int		list_size;
	int		oldest_index;
};

#endif