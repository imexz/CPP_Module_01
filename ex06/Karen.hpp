/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:35:13 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/27 23:22:44 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

class	Karen {

	public:

		enum e_loglevel {
			DEBUG,
			INFO,
			WARNING,
			ERROR,
			DEFAULT
		};

		Karen(void);
		Karen(std::string loglevel);
		~Karen(void);
		void			complain(std::string level);
		enum e_loglevel	getLoglevel(void);
		bool			setLoglevel(std::string level);

	private:

		enum e_loglevel	_loglevel;
		void			_debug(void);
		void			_info(void);
		void			_warning(void);
		void			_error(void);
		void			_default(void);

};

#endif // ********************************************************* KAREN_HPP //
