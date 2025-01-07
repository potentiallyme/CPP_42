#include "Template.hpp"

int main( void ) {
	int a = 2;
	int b = 3;

	std::cout << YELLOW "#BEFORE SWAP#" RESET << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << GREEN "#AFTER SWAP#" RESET << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	NEWLINE

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << YELLOW "#BEFORE SWAP#" RESET << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << GREEN "#AFTER SWAP#" RESET << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	NEWLINE

	double e = 3.151;
	double f = 17.80085;

	std::cout << YELLOW "#BEFORE SWAP#" RESET << std::endl;
	std::cout << "e = " << e << ", f = " << f << std::endl;
	::swap(e,f);
	std::cout << GREEN "#AFTER SWAP#" RESET << std::endl;
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f) << std::endl;
	
	return 0;
}
