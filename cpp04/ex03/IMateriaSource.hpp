#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"

class IMateriaSource
{
	public:
		// * Destructor
		virtual ~IMateriaSource();

		// * Getters / Setters
		virtual void learnMateria(AMateria *) = 0;
		virtual AMateria *createMateria(std::string &type) = 0;
};

#endif
