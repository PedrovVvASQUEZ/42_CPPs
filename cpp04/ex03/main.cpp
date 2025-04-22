/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:45:52 by codespace         #+#    #+#             */
/*   Updated: 2025/04/22 21:20:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	//========== Given main
	
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter	*me = new Character("me");
	AMateria	*tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter	*bob = new Character("bob");	
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;


	//========== Some Other tests

	std::cout << std::endl;
	ICharacter	*tarnished = new Character("Warrior");
	ICharacter	*semigod = new Character("Malenia");
	AMateria	*ash_of_war = new Ice();
	AMateria	*spell = new Cure();
	IMateriaSource	*mater = new MateriaSource();

	tarnished->equip(new Ice());
	tarnished->equip(new Cure());
	tarnished->equip(ash_of_war);
	tarnished->equip(new Cure());
	tarnished->equip(new Ice());
	tarnished->equip(spell);

	tarnished->use(0, *semigod);
	tarnished->use(3, *semigod);
	tarnished->unequip(0);
	tarnished->use(0, *semigod);

	std::cout << std::endl;
	mater->learnMateria(new Ice());
	mater->learnMateria(new Cure());
	mater->learnMateria(new Cure());
	mater->learnMateria(new Cure());
	mater->learnMateria(new Cure());

	tarnished->equip(mater->createMateria("ice"));
	tarnished->equip(mater->createMateria("cure"));
	tarnished->equip(mater->createMateria("cure"));
	tarnished->equip(mater->createMateria("ice"));
	tarnished->equip(mater->createMateria("cure"));

	tarnished->use(0, *semigod);
	tarnished->use(3, *semigod);

	delete (tarnished);
	delete (semigod);
	// delete (spell);
	delete (mater);

	return (0);
}
