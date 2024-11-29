#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_store_f = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int f_int){
	std::cout << "Int constructor called" << std::endl;
	_store_f = f_int << _f_bits;
}

Fixed::Fixed(const float f_float){
	std::cout << "Float constructor called" << std::endl;
	_store_f = (int)round(f_float * (1 << _f_bits));
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

std::ostream& operator<<(std::ostream &other, Fixed const &f_other){
		other << f_other.toFloat();
		return other;
}

int Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return _store_f;
}

void Fixed::setRawBits(int const raw){
	_store_f = raw;
}

float Fixed::toFloat(void) const{
	return (float)_store_f / (float)(1 << _f_bits);
}

int Fixed::toInt(void) const{
	return (int)(_store_f >> _f_bits);
}

