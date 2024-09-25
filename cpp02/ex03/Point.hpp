#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point{
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point();
		~Point();
		
		Point(Fixed const a, Fixed const b);
		Point(Point &other);
		Point& operator=(Point const &other);

		float getx(void) const;
		float gety(void) const;
};

bool bsp(Point const &a, Point const &b, Point const &c, 
		Point const &point);

#endif

