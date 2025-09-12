/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:58:53 by tfalchi           #+#    #+#             */
/*   Updated: 2025/09/11 11:59:47 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	this->_rawBits = 0;
}
Fixed::Fixed(const int value)
{
	this->_rawBits = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	this->_rawBits = roundf(value * (1 << _fractionalBits));
}
Fixed::Fixed(const Fixed &other)
{
	*this = other;
}
Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
	{
		this->_rawBits = other.getRawBits();
	}
	return *this;
}

bool Fixed::operator<(const Fixed &other) const
{
	if (this->_rawBits < other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>(const Fixed &other) const
{
	if (this->_rawBits > other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &other) const
{
	if (this->_rawBits >= other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &other) const
{
	if (this->_rawBits <= other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(const Fixed &other) const
{
	if (this->_rawBits == other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &other) const
{
	if (this->_rawBits != other.getRawBits())
		return true;
	return false;
}

Fixed Fixed::operator+(const Fixed &other)
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other)
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other)
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other)
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed &Fixed::operator++(void) 
{
	this->_rawBits++;
	return *this;
}

Fixed Fixed::operator++(int) 
{
	Fixed temp = *this;
	this->_rawBits++;
	return temp;
}

Fixed &Fixed::operator--(void) 
{
	this->_rawBits--;
	return *this;
}

Fixed Fixed::operator--(int) 
{
	Fixed temp = *this;
	this->_rawBits--;
	return temp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}

Fixed::~Fixed() { }

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
