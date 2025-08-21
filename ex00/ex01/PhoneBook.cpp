/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:28:16 by tfalchi           #+#    #+#             */
/*   Updated: 2025/08/19 17:47:27 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "repertory.hpp"

PhoneBook::~PhoneBook() {}

PhoneBook::PhoneBook() : max_contacts(7), current_nb(0){};

void	PhoneBook::add_contact() 
{
	Contact	new_contact;
	std::string input;
	std::cout << "Enter first name: ";
	std::cin >> input;
	new_contact.name = input;
	std::cout << "Enter last name: ";
	std::cin >> input;
	new_contact.last = input;
	std::cout << "Enter nickname: ";
	std::cin >> input;
	new_contact.nick = input;
	std::cout << "Enter phone number: ";
	std::cin >> input;
	new_contact.phone = input;
	new_contact.id = current_nb + 1;
	if (current_nb >= max_contacts) 
	{
		current_nb = 0;
	}
	array[current_nb] = new_contact;
	current_nb++;
}

void	PhoneBook::search_contact()
{
	int id;
	str input;
	std::cout << "Contacts:\n";
	for (int i = 0; i < current_nb; i++) 
	{
		std::cout << (1 + i);
		if (i < max_contacts)
			std::cout << " ";
		std::cout << "|";
		if (array[i].name.length() > 10)
			std::cout << array[i].name.substr(0, 9) << ".";
		else
		{
			std::cout << std::setw(10) << std::setfill('.');
			std::cout << std::setw(10) << array[i].name << std::setfill('.');
		}
		std::cout << "|";
		if (array[i].last.length() > 10)
			std::cout << array[i].last.substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << array[i].last << std::setfill('.');
		std::cout << "|";
		if (array[i].nick.length() > 10)
			std::cout << array[i].nick.substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << array[i].nick << std::setfill('.');
		std::cout << "|" << "\n";
	}
	std::cout << "Insert the id you want: ";
	std::cin >> id;
	if (id < 1 || id > current_nb) {
		std::cout << "Invalid ID\n";
		std::cout << "Press Enter to continue...";
		std::cin.ignore();
		std::cin.get();
		return;
	}
	Contact contact = array[id - 1];
	std::cout << "Contact found:\n";
	std::cout << "Name: " << contact.name << "\n";
	std::cout << "Last name: " << contact.last << "\n";
	std::cout << "Nickname: " << contact.nick << "\n";
	std::cout << "Phone number: " << contact.phone << "\n\n";
	std::cout << "Press Enter to continue...";
	std::cin.ignore();
	std::cin.get();
}
