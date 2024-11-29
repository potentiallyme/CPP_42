#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"
#include "AMateria.hpp"

class AMateria;

class ICharacter{
	public:
		// * Constructors
		// ICharacter();
		// ICharacter(const ICharacter &);
		// * Destructor
		virtual ~ICharacter(){};

		// * MEMBERS
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria *) = 0;
		virtual void unequip(int) = 0;
		virtual void use(int, ICharacter &) = 0;
	protected:
		std::string _name;
		
};

#endif
