/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrantz <mstrantz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 10:31:01 by mstrantz          #+#    #+#             */
/*   Updated: 2022/01/27 18:29:13 by mstrantz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool	inputCheck(int argc, char **argv) {

	std::string		s;

	if (argc != 4) {
		std::cerr << "error: invalid amount of arguments" << std::endl;
		return (false);
	}
	for (int i = 1; i < argc; i++) {
		s = argv[i];
		if (s.empty()) {
			std::cerr	<< "error: argument "
						<< i
						<< ": empty string detected" << std::endl;
			return (false);
		}
		s.clear();
	}
	return (true);
}


int	main(int argc, char **argv)
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		content;
	std::string		s1;
	std::string		s2;
	std::size_t		found;

	if (!inputCheck(argc, argv))
		return (1);
	content = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	ifs.exceptions(std::ifstream::failbit | std::ifstream::badbit);
	ofs.exceptions(std::ofstream::failbit | std::ofstream::badbit);
	try {
		ifs.open(argv[1], std::ifstream::in);
		ofs.open(content.append(".replace"), std::ofstream::out | std::ofstream::trunc);
		content.clear();
		content.assign((std::istreambuf_iterator<char>(ifs)), (std::istreambuf_iterator<char>() ));
		found = 0;
		while(found != std::string::npos) {
			found = content.find(s1, found);
			if (found == std::string::npos)
				break ;
			content.erase(found, s1.size());
			content.insert(found, s2);
		}
		ofs << content;
		ifs.close();
		ofs.close();
	}
	catch (std::ifstream::failure e) {
		std::cerr << "Exception opening/reading/closing infile" << std::endl;
		return (1);
	}
	catch (std::ofstream::failure e) {
		std::cerr << "Exception opening/reading/closing outfile" << std::endl;
		return (1);
	}
	return (0);
}
