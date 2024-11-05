#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"

class ICharacter
{
	public:
		// * Constructors
		ICharacter();
		ICharacter(const ICharacter &);

		// * Destructor
		~ICharacter();

		// * Operator(s)
		ICharacter & operator=(const ICharacter &);
		
		// * Getters / Setters

	private:
		
};

#endif
