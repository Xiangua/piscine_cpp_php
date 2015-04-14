/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folier <folier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 10:32:38 by folier            #+#    #+#             */
/*   Updated: 2015/01/05 14:53:48 by folier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

int		main(int ac, char **av){
	if (ac > 1){
		for (int i = 1; i < ac; i++){
			for (int j = 0; av[i][j]; j++){
				if (av[i][j] > 96 &&  av[i][j] < 123){
					std::cout << char(av[i][j] - 32);
				}
				else {
					std::cout << av[i][j];
				}
			}
		}
		std::cout << std::endl;
	}
	else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	return (0);
}
