/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:46:41 by tfalchi           #+#    #+#             */
/*   Updated: 2025/09/11 15:13:38 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed 		a(1);
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << std::endl << "Subject tests:" << std::endl;
	std::cout << "---------------------------------" << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << "---------------------------------" << std::endl << std::endl;

	std::cout << "Additional tests:" << std::endl;

	a++;

	std::cout << "a: " << a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "--a: " << --a << std::endl;
	std::cout << "a: " << a << std::endl;

	std::cout << "b: " << b << std::endl;

	std::cout << "min(b, a): " << Fixed::min(b, a) << std::endl;

	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;

	std::cout << "a + b: " << a + b << std::endl;
	std::cout << "a - b: " << a - b << std::endl;
	std::cout << "a * b: " << a * b << std::endl;
	std::cout << "a / b: " << a / b << std::endl;

	a = Fixed(12);

	std::cout << "a: " << a << std::endl;
	std::cout << "a / b: " << a / b << std::endl;

	return 0;
}