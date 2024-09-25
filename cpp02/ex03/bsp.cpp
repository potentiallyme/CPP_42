#include "Point.hpp"

float s(Point const &a, Point const &b, Point const &c){
	return ((a.getx() - c.getx()) * (b.gety() - c.gety()) - \
		(b.getx() - c.getx()) * (a.gety() - c.gety()));
}

bool bsp(Point const &a, Point const &b, Point const &c, 
		Point const &p){
	float s1 = s(p, a, b);
	float s2 = s(p, b, c);
	float s3 = s(p, c, a);
	bool neg = (s1 < 0) || (s2 < 0) || (s3 < 0);
	bool pos = (s1 > 0) || (s2 > 0) || (s3 > 0);
	return !(neg && pos);
}
