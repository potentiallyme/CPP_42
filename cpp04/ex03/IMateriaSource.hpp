#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"

class IMateriaSource
{
	public:
		// * Constructors
		IMateriaSource();
		IMateriaSource(const IMateriaSource &);

		// * Destructor
		~IMateriaSource();

		// * Operator(s)
		IMateriaSource & operator=(const IMateriaSource &);
		
		// * Getters / Setters

	private:
		
};

#endif
