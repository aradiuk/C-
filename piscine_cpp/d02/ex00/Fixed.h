#ifndef EX00_FIXED_H
#define EX00_FIXED_H
#include <iostream>

class Fixed
{
private:
	int					value;
	static const int	fractBits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& obj);
	Fixed& operator=(const Fixed& obj);
	int		getRawBits() const;
	void	setRawBits(int const raw);
};


#endif //EX00_FIXED_H
