/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:53:07 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/26 18:11:38 by mstrantz         ###   ########.fr       */
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

		bool			setName(std::string name);
		std::string		getName(void);
		void			announce(void);
		static Zombie*	zombieHorde(int N, std::string name);
};

#endif // ******************************************************** ZOMBIE_HPP //
