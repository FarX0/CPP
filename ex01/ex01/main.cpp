/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:59:25 by tfalchi           #+#    #+#             */
/*   Updated: 2025/08/22 16:59:28 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* horde = zombieHorde(5, "Zombie");
	for (int i = 0; i < 5; ++i)
	{
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}