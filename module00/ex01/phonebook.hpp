/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:46:53 by arendon-          #+#    #+#             */
/*   Updated: 2022/08/22 18:47:32 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

enum cmd_input
{
	ADD = 1,
	SEARCH,
	EXIT
};

void	print_prompt(void);
void	print_welcome(void);
void	print_bye(void);
void	print_complain(void);
void	print_askindex(void);
void	print_complain2(void);
void	string_10digits(std::string str);
void	print_head_table(void);




#endif