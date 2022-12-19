/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:54:16 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/28 11:34:32 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {

	Zombie	*new_zombie;

	Zombie::randomChump("Z1");
	Zombie::randomChump("Z2");
	new_zombie = Zombie::newZombie("Z3alloc");
	new_zombie->announce();
	delete new_zombie;
	return (0);
}
