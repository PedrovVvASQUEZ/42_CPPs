/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:48:16 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/12 17:55:14 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <sstream>
# include <iostream>
# include <iomanip>

class Contact{
	
public:

	void		set_contact(const std::string &fname, const std::string &lname,
							const std::string &nname, const std::string &phnb,
							const std::string &ds);
	void		display_contact(void) const;
	void		display_format(int index) const;
	std::string format_column(const std::string &str) const;
	
	Contact(void);
	~Contact(void);

private:

	const std::string	firstname;
	const std::string	lastname;
	const std::string	nickname;
	const std::string	phone_nb;
	const std::string	darkest_secret;
};

#endif