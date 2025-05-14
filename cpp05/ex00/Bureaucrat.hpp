/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:33:06 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/14 18:12:58 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class	Bureaucrat{

public:

	Bureaucrat(void);
	Bureaucrat(const std::string name);
	Bureaucrat(const std::string name, const int garde);
	Bureaucrat(const Bureaucrat &rhs);
	~Bureaucrat(void);

	Bureaucrat	&operator=(const Bureaucrat &rhs);

	std::string	getName(void) const;
	int			getGrade(void) const;

	void		promotion(void);
	void		punition(void);

	class	BadGradeException : public std::exception{

		public:
		const char	*what() const throw()
		{
			return ("The wanted grade is out of range. Choose something between 1 and 150");
		}
	};

private:

	const std::string	_name;
	int					_grade;
};

#endif