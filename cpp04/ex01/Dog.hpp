#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

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

		// * GETTERS / SETTERS
		Brain *getBrain();
		void setIdeas(std::string, int);
		std::string *getIdeas();

	private:
		Brain *_brain;
};

#endif
