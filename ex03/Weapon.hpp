/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:51:28 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/26 20:43:39 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {

	private:
		std::string	_type;

	public:

		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);
		std::string const	&getType(void);
		bool				setType(std::string type);

};

#endif // ******************************************************** WEAPON_HPP //
