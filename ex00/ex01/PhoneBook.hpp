/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:02:52 by tfalchi           #+#    #+#             */
/*   Updated: 2025/07/17 17:09:04 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "repertory.hpp"

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();

	void add_contact();
	void search_contact();

private:
	const int max_contacts;
	int current_nb;
	Contact array[8];
};

#endif