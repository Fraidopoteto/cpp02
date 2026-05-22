#include "Fixed.hpp"

Fixed::Fixed() : fp_nbr(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &cpy)
{
	std::cout << "Copy constructor called\n";
	*this = cpy;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Fixed Assignation operator called\n";

	if (this != &src)
		this->fp_nbr = src.getRawBits();

	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fp_nbr);
}

void Fixed::setRawBits(int const raw)
{
	this->fp_nbr = raw;
}