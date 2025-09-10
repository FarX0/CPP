/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 14:00:55 by tfalchi           #+#    #+#             */
/*   Updated: 2025/09/04 15:46:32 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int argc, char **argv)
{
	Harl harl;
	if (argc < 2)
	{
		std::cout << "Usage: " << argv[0] << " <level>" << std::endl;
		return 1;
	}
	harl.complain(argv[1]);
	return 0;
}
