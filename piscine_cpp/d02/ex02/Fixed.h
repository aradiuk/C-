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
	bool	operator==(Fixed const &right) const;
	bool	operator!=(Fixed const &right) const;
	bool	operator<(Fixed const &right) const;
	bool	operator>(Fixed const &right) const;
	bool	operator<=(Fixed const &right) const;
	bool	operator>=(Fixed const &right) const;
	Fixed	operator+(const Fixed& right);
	Fixed	operator-(const Fixed& right);
	Fixed	operator*(const Fixed& right);
	Fixed	operator/(const Fixed& right);
	Fixed&	operator++();
	Fixed	operator++(int num);
	Fixed&	operator--();
	Fixed	operator--(int num);
	static	Fixed&	min(Fixed& left, Fixed& right);
	static	const Fixed&	min(const Fixed& left, const Fixed& right);
	static	Fixed&	max(Fixed& left, Fixed& right);
	static	const Fixed&	max(const Fixed& left, const Fixed& right);
	int		getRawBits() const;
	void	setRawBits(int const raw);
	float	toFloat() const;
	int		toInt() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& aFixed);

#endif //EX00_FIXED_H
