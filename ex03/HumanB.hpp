/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:51:33 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/28 11:45:57 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB {

	private:

		std::string	_name;
		Weapon		*_weapon;

	public:

		HumanB(std::string name);
		~HumanB(void);

		void		attack(void);
		Weapon		&getWeapon(void) const;
		bool		setWeapon(Weapon &weapon);
		std::string	getName(void);
		bool		setName(std::string name);

};

#endif // ******************************************************** HUMANB_HPP //
