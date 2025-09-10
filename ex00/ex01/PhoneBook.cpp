/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:28:16 by tfalchi           #+#    #+#             */
/*   Updated: 2025/09/09 16:03:47 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "repertory.hpp"

PhoneBook::~PhoneBook() {}

PhoneBook::PhoneBook() : max_contacts(8), current_nb(0), full_flag(false) {}

void PhoneBook::add_contact()
{
	Contact new_contact;
	std::string input;

	std::cout << "Enter first name: ";
	do
	{
		std::getline(std::cin, input);
	} while (input.empty());
	new_contact.setName(input);
	std::cout << "Enter last name: ";
	do
	{
		std::getline(std::cin, input);
	} while (input.empty());
	new_contact.setLast(input);
	std::cout << "Enter nickname: ";
	do
	{
		std::getline(std::cin, input);
	} while (input.empty());
	new_contact.setNick(input);
	std::cout << "Enter phone number: ";
	do
	{
		std::getline(std::cin, input);
	} while (input.empty());
	new_contact.setPhone(input);
	std::cout << "Enter darkest secret: ";
	do
	{
		std::getline(std::cin, input);
	} while (input.empty());
	new_contact.setSecret(input);
	new_contact.setId(current_nb + 1);
	if (current_nb >= max_contacts)
	{
		current_nb = 0;
		full_flag = true;
	}
	array[current_nb] = new_contact;
	current_nb++;
}

void PhoneBook::search_contact()
{
	int id;
	std::string input;
	std::cout << "Contacts:\n";
	int n = 0;
	if (full_flag == false)
		n = current_nb;
	else
		n = max_contacts;
	for (int i = 0; i < n; i++)
	{
		std::cout << (1 + i);
		std::cout << "|";
		if (array[i].getName().length() > 10)
			std::cout << array[i].getName().substr(0, 9) << ".";
		else
		{
			std::cout << std::setw(10) << std::setfill('.');
			std::cout << std::setw(10) << array[i].getName() << std::setfill('.');
		}
		std::cout << "|";
		if (array[i].getLast().length() > 10)
			std::cout << array[i].getLast().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << array[i].getLast() << std::setfill('.');
		std::cout << "|";
		if (array[i].getNick().length() > 10)
			std::cout << array[i].getNick().substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << array[i].getNick() << std::setfill('.');
		std::cout << "|" << "\n";
	}
	std::cout << "Insert the id you want: ";
	std::getline(std::cin, input);
	id = std::atoi(input.c_str());
	if (id < 1 || (id > current_nb && full_flag == false) || id > max_contacts)
	{
		std::cout << "Invalid ID\n";
		std::cout << "Press Enter to continue...";
		std::cin.get();
		return;
	}
	Contact contact = array[id - 1];
	std::cout << "Contact found:\n";
	std::cout << "Name: " << contact.getName() << "\n";
	std::cout << "Last name: " << contact.getLast() << "\n";
	std::cout << "Nickname: " << contact.getNick() << "\n";
	std::cout << "Phone number: " << contact.getPhone() << "\n";
	std::cout << "Darkest secret: " << contact.getSecret() << "\n\n";
	std::cout << "Press Enter to continue...";
	std::cin.get();
}
