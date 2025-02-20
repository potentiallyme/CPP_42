#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"

class Animal{
	public:
		// * Constructors
		Animal();
		Animal(const Animal &);

		// * Destructor
		virtual ~Animal();

		// * Operator(s)
		Animal & operator=(const Animal &);
		
		// * Getters / Setters
		std::string getType() const;
		void setType(std::string &);

		// * Members
		virtual void makeSound() const = 0;

	protected:
		std::string type;
		
};

#endif
