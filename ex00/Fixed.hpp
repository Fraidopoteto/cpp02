#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &cpy);
		Fixed &operator=(const Fixed &src);
		~Fixed();
	
		int		getRawBits() const;
		void	setRawBits(int const raw);
		
	private:
		int					fp_nbr;
		static const int	bits = 8;
};


#endif