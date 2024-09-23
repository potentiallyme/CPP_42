#include "Fixed.hpp"

Fixed::Fixed(){
	// std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::~Fixed(){
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int f_int){
	// std::cout << "Int constructor called" << std::endl;
	_value = f_int << _f_bits;
}

Fixed::Fixed(const float f_float){
	// std::cout << "Float constructor called" << std::endl;
	_value = (int)round(f_float * (1 << _f_bits));
}

Fixed::Fixed(Fixed const &other){
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(Fixed const &other){
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_value = other.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream &other, Fixed const &f_other){
		other << f_other.toFloat();
		return other;
}

int Fixed::getRawBits(void) const{
	// std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

void Fixed::setRawBits(int const raw){
	_value = raw;
}

float Fixed::toFloat(void) const{
	return (float)_value / (float)(1 << _f_bits);
}

int Fixed::toInt(void) const{
	return (int)(_value >> _f_bits);
}

bool Fixed::operator>(Fixed const &other) const{
	return (_value > other._value);
}

bool Fixed::operator<(Fixed const &other) const{
	return (_value < other._value);
}

bool Fixed::operator>=(Fixed const &other) const{
	return (_value >= other._value);
}

bool Fixed::operator<=(Fixed const &other) const{
	return (_value <= other._value);
}

bool Fixed::operator==(Fixed const &other) const{
	return (_value == other._value);
}

bool Fixed::operator!=(Fixed const &other) const{
	return (_value != other._value);
}

Fixed Fixed::operator+(Fixed const &other) const{
	Fixed temp;
	temp._value = _value + other._value;
	return (temp);
}

Fixed Fixed::operator-(Fixed const &other) const{
	Fixed temp;
	temp._value = _value - other._value;
	return (temp);
}

Fixed Fixed::operator*(Fixed const &other) const{
	return Fixed(this->toFloat() * other.toFloat());

}

Fixed Fixed::operator/(Fixed const &other) const{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++(){
	++_value;
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed temp(*this);
	++_value;
	return (temp);
}

Fixed& Fixed::operator--(){
	--_value;
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed temp(*this);
	--_value;
	return (temp);
}

const Fixed& Fixed::min(Fixed const &f1, Fixed const &f2){
	return f1 < f2 ? f1 : f2;
}

const Fixed& Fixed::max(Fixed const &f1, Fixed const &f2){
	return f1 > f2 ? f1 : f2;
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2){
	return f1 < f2 ? f1 : f2;
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2){
	return f1 > f2 ? f1 : f2;
}

