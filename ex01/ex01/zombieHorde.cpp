/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 15:11:06 by tfalchi           #+#    #+#             */
/*   Updated: 2025/08/20 17:58:56 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
	Zombie* h_zombies = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		h_zombies[i].setName(name);
	}
	return (&h_zombies[1]);
}