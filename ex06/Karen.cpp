/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:35:16 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/27 23:07:11 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {
}

Karen::Karen(std::string loglevel) {
	setLoglevel(loglevel);
}

Karen::~Karen(void) {
}

void	Karen::_debug(void) {

	std::cout	<< "[ DEBUG ]" << std::endl;
	std::cout	<< "I love having extra bacon for my 7XL-double-cheese-triple"
				<< "-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Karen::_info(void) {

	std::cout	<< "[ INFO ]" << std::endl;
	std::cout	<< "I cannot believe adding extra bacon costs more money. "
				<< "You didn’t put enough bacon in my burger! "
				<< "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::_warning(void) {

	std::cout	<< "[ WARNING ]" << std::endl;
	std::cout	<< "I think I deserve to have some extra bacon for free. "
				<< "I’ve been coming for years whereas you started working "
				<< "here since last month." << std::endl;
}

void	Karen::_error(void) {

	std::cout	<< "[ ERROR ]" << std::endl;
	std::cout	<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl;
}

void	Karen::_default(void) {

	std::cout	<< "[ Probably complaining about insignificant problems ]"
				<< std::endl;
}

void	Karen::complain(std::string level) {

	std::string	keyword[4] = {"DEBUG" , "INFO" , "WARNING", "ERROR"};
	void		(Karen::*fp[5])(void) = { &Karen::_debug, &Karen::_info,\
							&Karen::_warning, &Karen::_error ,&Karen::_default};
	int	i;

	i = getLoglevel();
	while (i < 4) {

		if (level.compare(keyword[i]) == 0) {
			(this->*fp[i])();
			return ;
		}
		i++;
	}
	i = getLoglevel();
	if (i == 4)
		(this->*fp[4])();
}

enum Karen::e_loglevel	Karen::getLoglevel(void) {

	return (_loglevel);
}

bool	Karen::setLoglevel(std::string level) {

	std::string	keyword[4] = {"DEBUG" , "INFO" , "WARNING", "ERROR"};
	for(int	i = 0; i < 4; i++) {
		if (level.compare(keyword[i]) == 0) {
			switch (i)
			{
			case 0:
				_loglevel = DEBUG;
				break;
			case 1:
				_loglevel = INFO;
				break;
			case 2:
				_loglevel = WARNING;
				break;
			case 3:
				_loglevel = ERROR;
				break;
			}
			return (true);
		}
	}
	_loglevel = DEFAULT;
	return (true);
}
