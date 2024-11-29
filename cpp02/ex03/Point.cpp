#include "Point.hpp"

Point::Point(){}

Point::~Point(){}

Point::Point(Fixed const a, Fixed const b): _x(a), _y(b){}

Point::Point(Point &other): _x(other._x), _y(other._y){
	*this = other;
}

Point& Point::operator=(const Point &other){
	(void)other;
	return *this;
}

float Point::getx() const{
	return _x.toFloat();
}

float Point::gety()const {
	return _y.toFloat();
}

