/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:41:48 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/20 17:59:43 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class	PresidentialPardonForm : public AForm{

public:

	PresidentialPardonForm(void);
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &rhs);
	virtual ~PresidentialPardonForm(void);

	PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);

	virtual	void	beSigned(const Bureaucrat &rhs);

	
private:

	std::string	_target;

};


#endif