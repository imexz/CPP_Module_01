/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:51:14 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/28 11:48:14 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(nullptr) {
}

HumanB::~HumanB(void) {
}

Weapon	&HumanB::getWeapon(void) const{
	return (*_weapon);
}

bool	HumanB::setWeapon(Weapon &weapon) {

	if (weapon.getType().empty()) {
		std::cerr << "There is no such thing as an empty weapon type" << std::endl;
		return (false);
	}
	_weapon = &weapon;
	return (true);
}

std::string	HumanB::getName(void) {
	return (_name);
}

bool	HumanB::setName(std::string name) {
	if (name.empty())
		return (false);
	_name = name;
	return (true);
}

void	HumanB::attack(void) {

	if (_weapon) {
		std::cout	<< getName()
					<< " attacks with their "
					<< getWeapon().getType()
					<< std::endl;
	}
	else {
		std::cout	<< getName()
					<< " has no weapon"
					<< std::endl;
	}
}
