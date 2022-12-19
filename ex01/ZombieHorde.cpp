/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:56:11 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/28 11:40:10 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*Zombie::zombieHorde(int N, std::string name) {

	Zombie	*newZombieHorde = new Zombie[N];
	size_t	len;

	if (name.empty()) {
		std::cerr << "error: name cannot be empty" << std::endl;
		delete [] newZombieHorde;
		exit (1);
	}
	len = name.size();
	for (int i = 0; i < N; i++) {
		name.push_back(i + '0');
		newZombieHorde[i].setName(name);
		name.resize(len);
	}
	return (newZombieHorde);
}
