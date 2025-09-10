/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:58:53 by tfalchi           #+#    #+#             */
/*   Updated: 2025/09/10 14:29:54 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
}
Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(value * (1 << _fractionalBits));
}
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_rawBits = other.getRawBits();
	}
	return *this;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
int Fixed::getRawBits() const
{
	return this->_rawBits;
}
void Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->_rawBits) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const
{
	return this->_rawBits >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
	// Print the data members of obj using os like you would using cout
	os << obj.toFloat();
	// Return the output stream object so the operator may be cascaded correctly
	return os;
}
