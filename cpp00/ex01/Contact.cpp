/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:54:06 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/25 15:40:55 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) : firstname(""), lastname(""), nickname(""),
						phone_nb(""), darkest_secret("")
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	itos(int value)
{
	std::stringstream	num_in_str_format;
	num_in_str_format << value;
	return (num_in_str_format.str());
}

void	Contact::set_contact(const std::string &fname, const std::string &lname,
					const std::string &nname, const std::string &phnb,
					const std::string &ds)
{
	firstname = fname;
	lastname = lname;
	nickname = nname;
	phone_nb = phnb;
	darkest_secret = ds;
}

std::string	Contact::format_column(const std::string &str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (std::string(10 - str.length(), ' ') + str);
}

void	Contact::display_format(int index) const
{
	std::cout << "|" << format_column(itos(index))
		<< "|" << format_column(firstname)
		<< "|" << format_column(lastname)
		<< "|" << format_column(nickname) 
		<< "|" << std::endl;
}

void	Contact::display_contact(void) const
{
	std::cout << "First name: " << firstname << std::endl
			<< "Last name: " << lastname << std::endl
			<< "Nick name: " << nickname << std::endl
			<< "Phone number: " << phone_nb << std::endl
			<< "Darkest secret: " << darkest_secret << std::endl
			<< std::endl;
}
