#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	public:
		// * Constructors
		Cat();
		Cat(const Cat &);

		// * Destructor
		~Cat();
		// * Operator(s)
		Cat & operator=(const Cat &);
		
		// * Members
		void makeSound() const;

		// * GETTERS / SETTERS
		Brain *getBrain();
		void setIdeas(std::string, int);
		std::string *getIdeas();

	private:
		Brain *_brain;
};

#endif
