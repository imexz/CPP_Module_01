/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:14:42 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/28 11:42:40 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	Zombie		*Horde;
	std::string	str ("Otto");
	int			n;

	n = 7;
	Horde = Zombie::zombieHorde(n, str);
	for (int i = 0; i < n; i++) {
		Horde[i].announce();
	}
	delete [] Horde;
	return (0);
}
