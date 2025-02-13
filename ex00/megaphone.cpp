/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrahmat- <mrahmat-@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 15:56:57 by mrahmat-          #+#    #+#             */
/*   Updated: 2025/02/13 15:03:56 by mrahmat-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	convertString(std::string s) {
	for (unsigned long x = 0; x < s.length(); x++) {
		s[x] = toupper(s[x]);
	}
	return s;
}

int	main(int ac, char **av)	{
	if (ac == 1) {
		std::cout << "* LOUD UNBEARABLE FEEDBACK NOISE *";
	}
	for (int i = 1; i < ac; i++) {
		std::cout << convertString(av[i]);
		}
	std::cout << std::endl;
	return 0;
}