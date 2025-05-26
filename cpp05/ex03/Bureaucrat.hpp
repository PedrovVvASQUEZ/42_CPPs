/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:33:06 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/26 17:59:43 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "AForm.hpp"
# include <iostream>
# define RED "\x1B[31m"
# define END "\033[0m"

class AForm;

class	Bureaucrat{

public:

	Bureaucrat(void);
	Bureaucrat(const std::string name, const int grade);
	Bureaucrat(const Bureaucrat &rhs);
	~Bureaucrat(void);

	Bureaucrat	&operator=(const Bureaucrat &rhs);

	std::string	getName(void) const;
	int			getGrade(void) const;

	void		promotion(void);
	void		punition(void);
	void		signForm(AForm &rhs) const;
	void		executeForm(const AForm &rhs) const;

	class	GradeTooHighException : public std::exception{

		public:
		virtual const char	*what(void) const throw()
		{
			return ("The wanted grade is too HIGH. It must stay between 1 and 150\n");
		}
	};

	class	GradeTooLowException : public std::exception{

		public:
		virtual const char	*what(void) const throw()
		{
			return ("The wanted grade is too LOW. It must stay between 1 and 150\n");
		}
	};

private:

	const std::string	_name;
	int					_grade;
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif