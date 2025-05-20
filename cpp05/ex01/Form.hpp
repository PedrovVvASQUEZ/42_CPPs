/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 14:01:22 by codespace         #+#    #+#             */
/*   Updated: 2025/05/20 16:47:20 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>
# include <iostream>

class Bureaucrat;

class	Form{

public:

	Form(void);
	Form(const std::string name, const int rgarde,
			const int rexec);
	Form(const Form &rhs);
	~Form(void);

	Form	&operator=(const Form &rhs);

	std::string	getName(void) const;
	bool		getSignature(void) const;
	int			getRequireGrade(void) const;
	int			getExecutionGrade(void) const;
	
	void		beSigned(const Bureaucrat &rhs);

	class	GradeTooHighException : public std::exception{

		public:
		const char	*what() const throw()
		{
			return ("The wanted grade is too HIGH.\n");
		}
	};

	class	GradeTooLowException : public std::exception{

		public:
		const char	*what() const throw()
		{
			return ("The wanted grade is too LOW.\n");
		}
	};

private:

	const std::string	_name;
	bool				_signed;
	const int			_rgrade;
	const int			_rexec;
};

std::ostream	&operator<<(std::ostream &o, const Form &rhs);

#endif