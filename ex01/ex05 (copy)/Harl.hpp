/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 18:46:29 by tfalchi           #+#    #+#             */
/*   Updated: 2025/09/04 15:49:21 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#include <cstring>


class Harl
{
public:
	Harl();
	~Harl();
	void complain(std::string level);
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
