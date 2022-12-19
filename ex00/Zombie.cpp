/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:56:14 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/28 11:33:36 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
}

Zombie::Zombie(std::string name) {
	_name = name;
}

Zombie::~Zombie(void) {
	std::cout << _name << " disappeared" << std::endl;
}

void	Zombie::announce(void) {

	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
