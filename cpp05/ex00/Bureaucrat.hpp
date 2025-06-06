/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:33:06 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/19 14:19:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

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

	class	GradeTooHighException : public std::exception{

		public:
		const char	*what(void) const throw()
		{
			return ("The wanted grade is too HIGH. It must stay between 1 and 150\n");
		}
	};

	class	GradeTooLowException : public std::exception{

		public:
		const char	*what(void) const throw()
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