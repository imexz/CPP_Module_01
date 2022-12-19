/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:51:12 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/28 11:47:47 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name) {
}

HumanA::~HumanA(void) {
}

Weapon	&HumanA::getWeapon(void) const{
	return (_weapon);
}

bool	HumanA::setWeapon(Weapon weapon) {
	_weapon = weapon;
	return (true);
}

std::string	HumanA::getName(void) {
	return (_name);
}

bool	HumanA::setName(std::string name) {
	if (name.empty())
		return (false);
	_name = name;
	return (true);
}

void	HumanA::attack(void) {

	std::cout	<< getName()
				<< " attacks with their "
				<< getWeapon().getType()
				<< std::endl;
}
