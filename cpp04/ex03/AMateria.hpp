#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"
#include "ICharacter.hpp"

class AMateria
{
	public:
		// * Constructors
		AMateria();
		AMateria(std::string const &);
		AMateria(const AMateria &);

		// * Destructor
		virtual ~AMateria();

		// * Operator(s)
		// AMateria & operator=(const AMateria &);
		
		// * Getters / Setters
		virtual std::string &getType();
		virtual AMateria *clone() = 0;
		virtual void use(ICharacter &);
	protected:
		std::string _type;
};

#endif
