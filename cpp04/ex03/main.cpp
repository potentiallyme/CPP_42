#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void){
	CONSTRUCT
	IMateriaSource *mat = new MateriaSource();
	Ice *ice = new Ice;Cure *cure = new Cure;
	mat->learnMateria(ice);
	mat->learnMateria(cure);
	std::cout << YELLOW << "# Creating Materias #" << RESET << std::endl;
	AMateria *m1 = mat->createMateria("ice");
	AMateria *m2 = mat->createMateria("cure");
	AMateria *m3 = mat->createMateria("ice");
	AMateria *m4 = mat->createMateria("ice");
	AMateria *m5, *m6;
	NEWLINE
	std::cout << YELLOW << "# Characters #" << RESET << std::endl;
	ICharacter *bob = new Character("Bob");
	ICharacter *jim = new Character ("Jim");
	NEWLINE
	std::cout << BLUE << "Equipping Materias" << std::endl;
	bob->equip(m1);
	bob->equip(m2);
	jim->equip(m3);
	jim->equip(m4);
	NEWLINE
	std::cout << BLUE << "Using Materias" << RESET << std::endl;
	bob->use(0, *jim);
	jim->use(0, *bob);
	bob->use(1, *jim);
	jim->use(1, *bob);
	bob->use(2, *jim);
	jim->use(2, *bob);
	bob->use(100, *jim);
	jim->use(-5, *bob);
	NEWLINE
	std::cout << BLUE << "Creating a copy" << RESET << std::endl;
	Character *rick = new Character("rick");
	m5 = mat->createMateria("ice");
	m6 = mat->createMateria("stone");
	rick->equip(m5);
	rick->equip(m6);
	Character *rick_copy = new Character(*rick);
	NEWLINE
	std::cout << BLUE << "Comparing rick and copy" << RESET << std::endl;
	delete m4; m4 = rick->getMateria(0); rick->unequip(0);
	delete m4; m4 = rick_copy->getMateria(1); rick_copy->unequip(1);
	delete m4; m4 = mat->createMateria("cure");
	rick_copy->equip(m4);
	rick->use(0, *rick_copy);
	rick->use(1, *rick_copy);
	rick_copy->use(0, *rick);
	rick_copy->use(1, *rick);
	NEWLINE
	DESTRUCT
	delete m1; delete m2; delete m3; delete m4; delete m5; delete m6;
	delete ice; delete cure;
	delete bob; DMSG("Bob")
	delete jim; DMSG("Jim")
	delete rick; DMSG("Rick")
	delete rick_copy; DMSG("Rick_copy")
	delete mat; DMSG("Mat")
}

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	Ice *ice = new Ice();
// 	Cure *cure = new Cure();
// 	src->learnMateria(ice);
// 	src->learnMateria(cure);
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	delete tmp; tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);

// 	delete tmp;
// 	delete ice;
// 	delete cure;
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return 0;
// }
