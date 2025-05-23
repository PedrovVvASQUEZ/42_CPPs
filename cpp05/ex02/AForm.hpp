/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:41:46 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/23 17:42:41 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"
# include <string>
# include <iostream>

class Bureaucrat;

class	AForm{

public:

	AForm(void);
	AForm(const std::string name, const int rgarde,
			const int rexec);
	AForm(const AForm &rhs);
	virtual ~AForm(void);

	AForm	&operator=(const AForm &rhs);

	std::string	getName(void) const;
	bool		getSignature(void) const;
	int			getRequireGrade(void) const;
	int			getExecutionGrade(void) const;
	
	void				beSigned(const Bureaucrat &rhs);
	virtual void		execute(const Bureaucrat &rhs) const = 0;

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

	class	FormNotSigned : public std::exception{

		public:
		virtual const char *what() const throw()
		{
			return ("The form isn't signed.");
		}
	};

	class	FileCantOpen : public std::exception{

		public:
		virtual const char *what() const throw()
		{
			return ("The file couldn't open.");
		}
	};

private:

	const std::string	_name;
	bool				_signed;
	const int			_rgrade;
	const int			_rexec;
};

std::ostream	&operator<<(std::ostream &o, const AForm &rhs);

#endif