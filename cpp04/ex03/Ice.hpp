#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		// * Constructors
		Ice();
		Ice(const Ice &);

		// * Destructor
		~Ice();

		// * Operator(s)
		Ice & operator=(const Ice &);
		
		// * Getters / Setters
		std::string &getType();
		void use(ICharacter &);
		Ice *clone();
	private:
		std::string _type;
};

#endif
