/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 11:49:27 by tfalchi           #+#    #+#             */
/*   Updated: 2025/09/05 11:29:48 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string type;

public:
	Weapon(std::string type);
	~Weapon();
	const std::string &getType(void);
	void setType(std::string type);
};
#endif