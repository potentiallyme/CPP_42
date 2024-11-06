#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void){
	CONSTRUCT
	HEAP
	IMateriaSource *matHeap = new MateriaSource();
	matHeap->learnMateria(new Ice);
	// matHeap->learnMateria(new Cure);
	STACK
	MateriaSource matStack;
	// Ice ice;
	Cure cure;
	// matStack.learnMateria(&ice);
	matStack.learnMateria(&cure);
	std::cout << YELLOW << "# Creating Materias #" << RESET << std::endl;
	AMateria *m1 = matHeap->createMateria("ice");
	AMateria *m2 = matStack.createMateria("cure");
	AMateria *m3 = matStack.createMateria("ice");
	AMateria *m4;

	std::cout << YELLOW << "# Characters #" << RESET << std::endl;
	ICharacter *bob = new Character("Bob");
	Character jim("Jim");
	std::cout << BLUE << "Equipping Materias" << std::endl;
	bob->equip(m1);
	bob->equip(m2);
	jim.equip(m1);
	jim.equip(m2);
	jim.equip(m3);
	NEWLINE
	std::cout << BLUE << "Using Materias" << RESET << std::endl;
	bob->use(0, jim);
	jim.use(0, *bob);
	bob->use(1, jim);
	jim.use(1, *bob);
	bob->use(2, jim);
	jim.use(2, *bob);
	bob->use(100, jim);
	jim.use(-5, *bob);
	NEWLINE
	std::cout << BLUE << "Creating a copy" << RESET << std::endl;
	delete m3;
	m3 = matStack.createMateria("cure");
	m4 = matHeap->createMateria("ice");
	Character *rick = new Character("rick");
	rick->equip(m3);
	rick->equip(m4);
	Character *rick_copy = new Character(*rick);
	NEWLINE
	std::cout << BLUE << "Comparing rick and copy" << RESET << std::endl;
	m4 = rick->getMateria(0); rick->unequip(0);
	m4 = rick_copy->getMateria(1); rick_copy->unequip(1);
	delete m4;
	m4 = matHeap->createMateria("cure");
	rick_copy->equip(m4);
	rick->use(0, *rick_copy);
	rick->use(1, *rick_copy);
	rick_copy->use(0, *rick);
	rick_copy->use(1, *rick);
	NEWLINE
	DESTRUCT
	// delete m1; delete m2; delete m3; delete m4;
	delete bob; delete rick; delete rick_copy;
	delete matHeap;
}
