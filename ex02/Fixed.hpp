#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed &cpy);
		~Fixed();
	
		Fixed &operator=(const Fixed &other);

		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;

		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	
		static Fixed& min(Fixed &a, Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
		
	private:
		int					raw_fp;
		static const int	bits = 8;

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif