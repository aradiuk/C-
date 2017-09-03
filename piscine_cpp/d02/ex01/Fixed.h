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
	Fixed(const int num);
	Fixed(const float num);
	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& aFixed);

#endif //EX00_FIXED_H
