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
		std::string const &getType() const;
		void use(ICharacter &);
		Ice *clone() const;
	private:
		std::string _type;
};

#endif
