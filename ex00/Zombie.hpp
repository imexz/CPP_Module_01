/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:49:05 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/28 11:32:13 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {

	private:

		std::string	_name;

	public:

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void			announce(void);
		static void		randomChump(std::string name);
		static Zombie*	newZombie(std::string name);
};

#endif // ******************************************************** ZOMBIE_HPP //
