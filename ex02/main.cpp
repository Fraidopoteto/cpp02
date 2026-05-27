#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c( 10.0f );
	Fixed d( 2.0f );


	std::cout << "======42 TEST======\n\n";

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "\n=====MATH TEST=====\n\n";

	std::cout << "c / d = " << c / d << std::endl;
	std::cout << "b - a = " << b - a << std::endl;


	std::cout << "\n==COMPARE TEST==\n\n";

	if (a < b)
		std::cout << "a < b" << std::endl;
	if (c > d)
		std::cout << "c > d" << std::endl;
	if (c != d)
		std::cout << "c != d" << std::endl;

		
	std::cout << "\n==DECREMENT TEST===\n\n";

	std::cout << "c      : " << c << std::endl;
	std::cout << "--c    : " << --c << std::endl;
	std::cout << "c--    : " << c-- << std::endl;
	std::cout << "c final: " << c << "\n\n";

	return (0);
}