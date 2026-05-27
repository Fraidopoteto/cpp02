#include "Fixed.hpp"

Fixed::Fixed() : raw_fp(0)
{

}

Fixed::Fixed(const Fixed &cpy)
{
	*this = cpy;
}

Fixed::Fixed(const int n) : raw_fp(n << bits)
{

}

Fixed::Fixed(const float f) : raw_fp(roundf(f * (1 << bits)))
{

}

Fixed::~Fixed()
{

}


//Operator Overload

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->raw_fp = other.getRawBits();

	return (*this);
}

bool Fixed::operator>(const Fixed &other) const
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;

	result.setRawBits((this->getRawBits() + other.getRawBits()));

	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;

	result.setRawBits((this->getRawBits() - other.getRawBits()));

	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;

	result.setRawBits((this->getRawBits() * other.getRawBits()) >> bits);

	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;

	result.setRawBits(((this->getRawBits() >> bits) / other.getRawBits()));

	return (result);
}

Fixed &Fixed::operator++(void)
{
	this->raw_fp++;
	return(*this);
}

Fixed &Fixed::operator--(void)
{
	this->raw_fp--;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	this->raw_fp++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	this->raw_fp--;
	return (temp);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}


//Memberfunnctionns

int Fixed::getRawBits(void) const
{
	return (this->raw_fp);
}

void Fixed::setRawBits(int const raw)
{
	this->raw_fp = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->raw_fp / (1 << this->bits));
}

int Fixed::toInt(void) const
{
	return (this->raw_fp >> bits);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
