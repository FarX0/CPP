/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:45:28 by tfalchi           #+#    #+#             */
/*   Updated: 2025/09/10 15:03:22 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void   Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void   Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void   Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void   Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	Harl harl;
	void (Harl::*harlFuncs[4])();

	harlFuncs[0] = &Harl::debug;
	harlFuncs[1] = &Harl::info;
	harlFuncs[2] = &Harl::warning;
	harlFuncs[3] = &Harl::error;
	const char *levels[] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; ++i)
	{
		if (level == levels[i])
		{
			(harl.*harlFuncs[i])();
			return ;
		}
	}
	std::cout << "Invalid argument" << std::endl;
}