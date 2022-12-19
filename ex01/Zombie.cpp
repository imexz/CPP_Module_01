/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:55:04 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/28 11:36:02 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "Contructor called" << std::endl;
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

std::string	Zombie::getName(void) {
	return (_name);
}

bool	Zombie::setName(std::string name) {
	if (name.empty())
		return (false);
	_name = name;
	return (true);
}
