/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 14:53:58 by tfalchi           #+#    #+#             */
/*   Updated: 2025/08/20 17:57:42 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
		this->name = name;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << name << " is destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}