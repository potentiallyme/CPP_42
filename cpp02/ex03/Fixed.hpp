#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

class Fixed{
	private:
		int _value;
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

		bool operator>(Fixed const &other) const;
		bool operator<(Fixed const &other) const;
		bool operator>=(Fixed const &other) const;
		bool operator<=(Fixed const &other) const;
		bool operator==(Fixed const &other) const;
		bool operator!=(Fixed const &other) const;

		Fixed operator+(Fixed const &other) const;
		Fixed operator-(Fixed const &other) const;
		Fixed operator*(Fixed const &other) const;
		Fixed operator/(Fixed const &other) const;

		Fixed& operator++();
		Fixed operator++(int x);
		Fixed& operator--();
		Fixed operator--(int x);
		
		const static Fixed& min(Fixed const &f1, Fixed const &f2);
		const static Fixed& max(Fixed const &f1, Fixed const &f2); 

		static Fixed& min(Fixed &f1, Fixed &f2);
		static Fixed& max(Fixed &f1, Fixed &f2); 

};

std::ostream& operator<<(std::ostream &other, Fixed const &f_other);

#endif /*FIXED_HPP*/
