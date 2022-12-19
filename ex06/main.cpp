/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:35:19 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/28 16:14:56 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv) {

	if (argc != 2) {
		std::cout << "error: invalid amount of arguments" << std::endl;
		return (1);
	}
	Karen	karen(argv[1]);

	if (karen.getLoglevel() == 4) {
		karen.complain(argv[1]);
		return (0);
	}
	karen.complain(argv[1]);
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	karen.complain("NONE");
	karen.complain("");
	return (0);
}
