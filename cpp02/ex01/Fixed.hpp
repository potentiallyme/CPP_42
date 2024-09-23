#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

class Fixed{
	private:
		int _store_f;
		static const int _f_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const int f_int);
		Fixed(const float f_float);
		Fixed(Fixed const &other);
		Fixed& operator=(Fixed const &other);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream& operator<<(std::ostream &other, Fixed const &f_other);

#endif /*FIXED_HPP*/
