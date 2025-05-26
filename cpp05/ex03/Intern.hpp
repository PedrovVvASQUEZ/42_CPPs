/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:01:12 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/26 18:17:32 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include <string>

class	Intern{

public:

	Intern(void);
	Intern(const Intern &rhs);
	~Intern(void);

	Intern	&operator=(const Intern &rhs);

	AForm	*makeForm(std::string fname, std::string ftarget) const;
	
	class	FormNotFound : public std::exception {

		public:
		virtual const char *what(void) const throw()
		{
			return ("The wanted Form doesn't exist");
		}
	};
};

#endif