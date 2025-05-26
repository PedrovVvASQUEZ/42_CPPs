/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:41:53 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/22 18:09:38 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class	RobotomyRequestForm : public AForm{

public:

	RobotomyRequestForm(void);
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &rhs);
	virtual ~RobotomyRequestForm(void);

	RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);

	void	execute(const Bureaucrat &executor) const;


private:

	std::string	_target;
};


#endif