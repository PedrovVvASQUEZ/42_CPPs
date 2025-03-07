/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:48:16 by pgrellie          #+#    #+#             */
/*   Updated: 2025/03/07 17:26:42 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact{
	
public:

	void	init_Contact(const std::string &firstname, std::string lastname,
					std::string nickname, std::string phonenumber,
					std::string darkest_secret);
	void	display_Contact(void) const;
	void	display_header(int index) const;
	Contact(void);
	~Contact(void);

private:

	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone_nb;
	std::string	darkest_secret;
};

#endif