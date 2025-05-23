/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgrellie <pgrellie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:36:46 by pgrellie          #+#    #+#             */
/*   Updated: 2025/05/23 15:39:13 by pgrellie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//==================== Contructors N Destructor ===================//


ShrubberyCreationForm::ShrubberyCreationForm(void) :
	AForm("ShrubberyCreationForm", 145, 137), _target("Unknown")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
	AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) :
	AForm(rhs), _target(rhs._target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

//=============== Operators Overload Member Functions =============//


ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

//======================= Member functions ========================//

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (this->getSignature() == false)
		throw AForm::FormNotSigned();
	else if (this->getExecutionGrade() < executor.getGrade())
		throw AForm::GradeTooLowException();
	else
	{
		std::ofstream	outf(this->_target + "Shrubberies");

		if (outf.is_open() == false)
			throw AForm::FileCantOpen();
		else
		{	
			outf << "                                                         ." << std::endl;
			outf << "                                   .         ;            " << std::endl;
			outf << "      .              .              ;%     ;;             " << std::endl;
			outf << "        ,           ,                :;%  %;              " << std::endl;
			outf << "         :         ;                   :;%;'     .,       " << std::endl;
			outf << ",.        %;     %;            ;        %;'    ,;         " << std::endl;
			outf << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'          " << std::endl;
			outf << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'           " << std::endl;
			outf << "    ;%;      %;        ;%;        % ;%;  ,%;'             " << std::endl;
			outf << "     `%;.     ;%;     %;'         `;%%;.%;'               " << std::endl;
			outf << "      `:;%.    ;%%. %@;        %; ;@%;%'                  " << std::endl;
			outf << "         `:%;.  :;bd%;          %;@%;'                    " << std::endl;
			outf << "           `@%:.  :;%.         ;@@%;'                     " << std::endl;
			outf << "             `@%.  `;@%.      ;@@%;                       " << std::endl;
			outf << "               `@%%. `@%%    ;@@%;                        " << std::endl;
			outf << "                 ;@%. :@%%  %@@%;                         " << std::endl;
			outf << "                   %@bd%%%bd%%:;                          " << std::endl;
			outf << "                     #@%%%%%:;;                           " << std::endl;
			outf << "                     %@@%%%::;                            " << std::endl;
			outf << "                     %@@@%(o);  . '                       " << std::endl;
			outf << "                     %@@@o%;:(.,'                         " << std::endl;
			outf << "                 `.. %@@@o%::;                            " << std::endl;
			outf << "                    `)@@@o%::;                            " << std::endl;
			outf << "                     %@@(o)::;                            " << std::endl;
			outf << "                    .%@@@@%::;                            " << std::endl;
			outf << "                    ;%@@@@%::;.                           " << std::endl;
			outf << "                   ;%@@@@%%:;;;.                          " << std::endl;
			outf << "               ...;%@@@@@%%:;;;;,..                       " << std::endl;
			outf.close();
		}
	}
}