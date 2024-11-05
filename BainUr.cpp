#include "BainUr.hpp"

// Constructors
BainUr::BainUr()
{
	std::cout << "\e[0;33mDefault Constructor called of BainUr\e[0m" << std::endl;
}

BainUr::BainUr(const BainUr &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of BainUr\e[0m" << std::endl;
}


// Destructor
BainUr::~BainUr()
{
	std::cout << "\e[0;31mDestructor called of BainUr\e[0m" << std::endl;
}


// Operators
BainUr & BainUr::operator=(const BainUr &assign)
{
	(void) assign;
	return *this;
}

