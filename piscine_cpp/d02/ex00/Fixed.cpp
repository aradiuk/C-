//
// Created by andrew on 18.08.17.
//

#include "Fixed.h"

Fixed::Fixed()
{
	std::cout << "Default constructor called.\n";
	value = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called.\n";
}

Fixed::Fixed(const Fixed& obj)
{
	std::cout << "Copy constructor called.\n";
	value = obj.value;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout << "Assignation operator called.\n";
	value = obj.value;
	return (*this);
}

int 	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called.\n";
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called.\n";
	value = raw;
}