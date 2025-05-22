/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:41:48 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/22 18:09:47 by codespace        ###   ########.fr       */
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

	void	execute(const Bureaucrat &executor) const;


private:

	std::string	_target;
};


#endif