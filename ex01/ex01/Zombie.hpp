/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:15:33 by tfalchi           #+#    #+#             */
/*   Updated: 2025/08/22 16:57:30 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;

public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	void announce(void);
	void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name );

#endif