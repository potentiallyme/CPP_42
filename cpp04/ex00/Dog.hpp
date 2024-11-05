#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"
#include "Animal.hpp"

class Dog : public Animal
{
	public:
		// * Constructors
		Dog();
		Dog(const Dog &);

		// * Destructor
		~Dog();

		// * Operator(s)
		Dog & operator=(const Dog &);
		
		// * Members
		void makeSound();

	private:
		//
};

#endif
