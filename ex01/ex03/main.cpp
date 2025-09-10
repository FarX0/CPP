/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:59:25 by tfalchi           #+#    #+#             */
/*   Updated: 2025/08/22 15:34:44 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
/* int main()
{
	Weapon weapon;
	std::string weaponType = "sword";
	weapon.setType(weaponType);

	HumanA humanA("Alice", weapon);
	HumanB humanB("Bob");

	humanA.attack();
	humanB.attack();

	humanB.setWeapon(weapon);
	humanB.attack();

	return 0;
} */