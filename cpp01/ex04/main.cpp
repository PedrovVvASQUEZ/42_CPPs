/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:27:47 by codespace         #+#    #+#             */
/*   Updated: 2025/03/28 15:18:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replaceNwrite(std::ifstream	&fdin, std::ofstream &fdout,
						const std::string &s1, const std::string &s2)
{
	std::string	line;
	size_t		pos;

	while (std::getline(fdin, line))
	{
		pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		fdout << line << std::endl;
	}
}

int	main(int ac, char **av)
{
	std::string 	filename(av[1]);
	std::string		s1(av[2]);
	std::string		s2(av[3]);
	std::ifstream	fdin(filename);
	std::ofstream	fdout(filename + ".replace");

	if (ac != 4)
	{
		std::cerr << "error: bad arguments" << std::endl;
		return (1);
	}
	if (s1.empty() == true)
	{
		std::cerr << "error: first string cannot be empty" << std::endl;
	}
	if (fdin.is_open() == false)
	{
		std::cerr << "error: cannot open file " << filename << std::endl;
		return (1);
	}
	if (fdout.is_open() == false)
	{
		std::cerr << "error: cannot open or create file "
				<< filename << ".replace" << std::endl;
		return (1);
	}
	replaceNwrite(fdin, fdout, s1, s2);
	fdin.close();
	fdout.close();
	return (0);
}
