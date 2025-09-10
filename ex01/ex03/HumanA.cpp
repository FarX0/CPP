/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 14:50:15 by tfalchi           #+#    #+#             */
/*   Updated: 2025/08/22 14:57:55 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}