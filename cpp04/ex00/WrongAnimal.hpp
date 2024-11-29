#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"

class WrongAnimal
{
	public:
		// * Constructors
		WrongAnimal();
		WrongAnimal(const WrongAnimal &);

		// * Destructor
		virtual ~WrongAnimal();

		// * Operator(s)
		WrongAnimal & operator=(const WrongAnimal &);
		
		// * Getters / Setters
		std::string getType();
		void setType(std::string &);

		// * Members
		void makeSound();

	protected:
		std::string type;
};

#endif
