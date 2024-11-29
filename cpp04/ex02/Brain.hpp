#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include "Macros.hpp"

class Brain{
	public:
		// * Constructors
		Brain();
		Brain(const Brain &);

		// * Destructor
		~Brain();

		// * Operator(s)
		Brain & operator=(const Brain &);
		
		// * Getters / Setters
		std::string *getIdeas();
		void setIdeas(std::string, int);

	private:
		std::string *_ideas;
};

#endif
