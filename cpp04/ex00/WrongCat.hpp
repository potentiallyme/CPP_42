#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		// * Constructors
		WrongCat();
		WrongCat(const WrongCat &);

		// * Destructor
		~WrongCat();

		// * Operator(s)
		WrongCat & operator=(const WrongCat &);

		// * Members
		void makeSound();
	private:
};

#endif
