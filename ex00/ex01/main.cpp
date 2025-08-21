/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:59:25 by tfalchi           #+#    #+#             */
/*   Updated: 2025/08/19 17:47:59 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "repertory.hpp"

int	main() {
	PhoneBook	phoneBook;
	std::string	line;
	system("clear");
	std::cout << "contact manager" << std::endl;
	while (1)
	{
		std::cout << "Type ADD, SEARCH or EXIT : ";
		sleep(1);
		if(std::getline(std::cin, line).eof())
			break;
		if (line == "ADD")
			phoneBook.add_contact();
		else if (line == "SEARCH")
			phoneBook.search_contact();
		else if (line == "EXIT")
		{
			std::cout << "Goodbye !" << std::endl;
			break;
		}
		line = "";
		system("clear");
	}
	return 0;
}