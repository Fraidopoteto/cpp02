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
	
		Fixed &operator=(const Fixed &src);

	
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		
	private:
		int					fp_nbr;
		static const int	bits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif