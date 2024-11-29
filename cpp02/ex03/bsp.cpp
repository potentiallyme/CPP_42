#include "Point.hpp"

float s(Point const &a, Point const &b, Point const &c){
	return (std::abs((a.getx() * (b.gety() - c.gety()) + b.getx()
			* (c.gety() - a.gety()) + c.getx() * (a.gety() - b.gety())) / 2.0));
}

bool bsp(Point const &a, Point const &b, Point const &c, 
		Point const &p){
	float abc = s(a, b, c);
	float pbc = s(p, b, c);
	float apc = s(a, p, c);
	float abp = s(a, b, p);
	if (pbc == 0 || apc == 0 || abp == 0)
		return false;
	if (abc == (pbc + apc + abp))
		return true;
	else
		return false;
}

