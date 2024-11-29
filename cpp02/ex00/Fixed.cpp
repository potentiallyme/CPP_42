#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_store_f = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other){
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(Fixed const &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_store_f = other.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return _store_f;
}

void Fixed::setRawBits(int const raw){
	_store_f = raw;
}

