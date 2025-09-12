/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:04:56 by tfalchi           #+#    #+#             */
/*   Updated: 2025/09/11 17:31:35 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap claptrap("CLTP");
	claptrap.attack("target");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	ScavTrap scavtrap("SCVT");
	scavtrap.attack("target");
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(3);
	scavtrap.guardGate();
	return 0;
}
