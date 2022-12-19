/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 18:23:24 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/26 18:46:01 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void) {

	std::string string ("HI THIS IS BRAIN");
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout	<< "Memory address string variable " <<&string << std::endl
				<< "Memory address stringPTR       " << stringPTR << std::endl
				<< "Memory address stringREF       " << &stringREF << std::endl
				<< "Value of string variable       " << string << std::endl
				<< "Value pointed to by stringPTR  " << *stringPTR <<std::endl
				<< "Value pointed to by stringREF  " << stringREF <<std::endl;

	return (0);
}
