/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:51:30 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/28 11:46:49 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA {

	private:

		Weapon		&_weapon;
		std::string	_name;

	public:

		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void		attack(void);
		Weapon		&getWeapon(void) const;
		bool		setWeapon(Weapon weapon);
		std::string	getName(void);
		bool		setName(std::string name);

};

#endif // ******************************************************** HUMANA_HPP //
