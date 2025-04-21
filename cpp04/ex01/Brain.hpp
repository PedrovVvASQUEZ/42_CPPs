/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 14:26:15 by codespace         #+#    #+#             */
/*   Updated: 2025/04/20 18:36:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class	Brain{

public:

	Brain(void);
	Brain(const Brain &rhs);
	~Brain(void);
	
	Brain	&operator=(const Brain &rhs);

	virtual void	display_ideas(void) const;

private:

	std::string	_ideas[100];
};

#endif