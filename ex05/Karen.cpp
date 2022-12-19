/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:35:16 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/27 21:01:10 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void) {
}

Karen::~Karen(void) {
}

void	Karen::_debug(void) {

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void	Karen::_info(void) {

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::_warning(void) {

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::_error(void) {

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level) {

	void	(Karen::*fp[4])(void) = {
		&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
	std::string	keyword[4] = {"DEBUG" , "INFO" , "WARNING", "ERROR"};

	for(int	i = 0; i < 4; i++) {
		if (level.compare(keyword[i]) == 0) {
			(this->*fp[i])();
			return ;
		}
	}
	std::cout << "Karen? Karen, are you with us? No complain, Karen?!" << std::endl;
}
