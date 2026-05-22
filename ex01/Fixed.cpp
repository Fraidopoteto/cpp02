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

Fixed::Fixed(const int n) : fp_nbr(n << bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : fp_nbr(roundf(f * (1 << bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Fixed Assignation operator called\n";

	if (this != &src)
		this->fp_nbr = src.getRawBits();

	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
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

float Fixed::toFloat(void) const
{
	return (roundf((float)this->fp_nbr / (1 << this->bits)));
}

int Fixed::toInt(void) const
{
	return (this->fp_nbr >> bits);
}
