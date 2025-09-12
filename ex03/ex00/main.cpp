/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:04:56 by tfalchi           #+#    #+#             */
/*   Updated: 2025/09/11 12:36:10 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("CLTP");
	claptrap.attack("target");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	return 0;
}
