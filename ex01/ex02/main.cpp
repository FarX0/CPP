/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:59:25 by tfalchi           #+#    #+#             */
/*   Updated: 2025/08/21 11:50:02 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string brain = "HI THIS IS BRAIN";
	std::string brain2 = brain;
	std::string *brain3 = &brain;
	std::cout << &brain << std::endl;
	std::cout << &brain2 << std::endl;
	std::cout << &brain3 << std::endl << '\n';
	std::cout << brain << std::endl;
	std::cout << brain2 << std::endl;
	std::cout << *brain3 << std::endl;
	return 0;
}