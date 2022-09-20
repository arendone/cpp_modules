/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:37:34 by arendon-          #+#    #+#             */
/*   Updated: 2022/08/23 12:57:59 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_HP

# define BOOK_HP

#include "contact.hpp"

class Book
{
	private:
		Contact contact[8];

	public:
		int index;
		
		Book(void);
		~Book(void);
		
	void	addContact(int i);
	int		display_contacts(void);
	void	read_index(void);
};

#endif
