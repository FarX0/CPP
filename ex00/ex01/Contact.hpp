/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfalchi <tfalchi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:15:33 by tfalchi           #+#    #+#             */
/*   Updated: 2025/07/17 17:09:57 by tfalchi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include "repertory.hpp"

class	Contact {
	public:
		Contact();
		~Contact();

		void	setName(str name);
		void	setLast(str last);
		void	setNick(str nick);
		void	setPhone(str phone);
		void	setSecret(str secret);
		str		getName() const;
		str		getLast() const;
		str		getNick() const;
		str		getPhone() const;
		str	name;
		str	last;
		str	nick;
		str	phone;
		int	id;
};

#endif