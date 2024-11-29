#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <sstream>

class Fixed{
	private:
		int _store_f;
		static const int _f_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &other);
		Fixed& operator=(Fixed const &other);
		int getRawBits(void) const;
		void setRawBits(int const raw);
};


#endif /*FIXED_HPP*/
