#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	public: 
		// * CONSTRUCTORS
		MateriaSource();
		MateriaSource(const MateriaSource &);

		// * DESTRUCTOR
		~MateriaSource();

		// * OPERATORS
		MateriaSource &operator=(MateriaSource const &);

		// * GETTERS / SETTERS
		void learnMateria(AMateria *);
		AMateria *createMateria(std::string const &type);
		
	private:
		AMateria *(_inventory[4]);
};

#endif
