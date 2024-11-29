#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"
#include "AMateria.hpp"

class IMateriaSource{
	public:
		// * Constructors
		// IMateriaSource();
		// IMateriaSource(const IMateriaSource &);
		
		// * Destructor
		virtual ~IMateriaSource() {}

		// * Getters / Setters
		virtual void learnMateria(AMateria *) = 0;
		virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif
