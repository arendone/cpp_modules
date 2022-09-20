/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arendon- <arendon-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 23:03:14 by sreinhol          #+#    #+#             */
/*   Updated: 2022/09/05 20:12:42 by arendon-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

void	fun()
{
	Base *t1;

	t1 = generate();
	identify(t1);
	identify(*t1);
	delete t1;
}

int	main(void)
{
	// Base *t1 = new Base();

	// t1 = generate();
	// identify(t1);
	// identify(*t1);
	// // delete t1;
	fun();
	system("leaks identify");
	return (0);
}
