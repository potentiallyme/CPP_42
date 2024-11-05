#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		// * Constructors
		Cure();
		Cure(const Cure &);

		// * Destructor
		~Cure();

		// * Operator(s)
		Cure & operator=(const Cure &);
		
		// * Getters / Setters
		std::string &getType();
		void use(ICharacter &);
		Cure *clone();
	private:
		std::string _type;
};

#endif
