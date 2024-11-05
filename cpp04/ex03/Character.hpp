#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		// * Constructors
		Character();
		Character(std::string);
		Character(const Character &);

		// * Destructor
		~Character();

		// * Operator(s)
		Character & operator=(const Character &);
		
		// * Getters / Setters
		std::string &getName();

		// * MEMBERS
		void equip(AMateria *);
		void unequip(int);
		void use(int, ICharacter &);
		AMateria *getMateria(int);
	private:
		std::string _name;
		AMateria *(_inventory[4]);
};

#endif
