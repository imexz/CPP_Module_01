/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:51:09 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/26 20:44:18 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
}

Weapon::Weapon(std::string type) {
	_type = type;
}

Weapon::~Weapon(void) {
}

std::string	const &Weapon::getType(void) {
	return (_type);
}

bool	Weapon::setType(std::string type) {

	_type = type;
	return (true);
}
