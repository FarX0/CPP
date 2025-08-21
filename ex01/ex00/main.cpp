/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:59:25 by tfalchi           #+#    #+#             */
/*   Updated: 2025/08/20 16:17:36 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << "Creating heap zombie:" << std::endl;
	Zombie *heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie;
	std::cout << "\nCreating stack zombie:" << std::endl;
	randomChump("StackZombie");
	std::cout << "\nProgram ending..." << std::endl;
	return 0;
}