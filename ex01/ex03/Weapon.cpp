/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 15:25:19 by tfalchi           #+#    #+#             */
/*   Updated: 2025/08/22 15:46:23 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
}

Weapon::~Weapon()
{
}

std::string Weapon::getType(void)
{
	return this->type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}