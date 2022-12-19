/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:35:13 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/27 20:03:20 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

class	Karen {

	private:

		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);

	public:

		Karen(void);
		~Karen(void);
		void	complain(std::string level);

};

#endif // ********************************************************* KAREN_HPP //
