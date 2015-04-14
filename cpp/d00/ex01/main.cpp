/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folier <folier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 15:46:35 by folier            #+#    #+#             */
/*   Updated: 2015/01/06 08:28:56 by folier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Book.class.hpp"

int main(void){
	std::string		buff;
	Book			tableBook[8];
	std::string		token[3] = {"ADD", "SEARCH", "EXIT"};

	while (1){
		std::cout << "ENTER INSTRUCTION : ";
		std::getline(std::cin, buff);
		if (!std::cin){
			std::cout << "c'est bon t'es fier tu as bien test le gros truc de relou ?" << std::endl;
			std::cout << "thug life!" << std::endl;
			break;
		}
		if (buff.compare(token[0]) == 0){
			tableBook[Book::getprofCount()].createAccount();
		}
		else if (buff.compare(token[1]) == 0){
			if (Book::getprofCount() > 0){
				for (int i = 0; i < Book::getprofCount(); i++){
					tableBook[i].showBook();
				}
				tableBook[Book::selectIndex()].showClient();
			}
			else {
				std::cout << "phoneBook empty" << std::endl;
			}
		}
		else if (buff.compare(token[2]) == 0){
			return (0);
		}
		else {
			std::cout << "tu as rien d'autre faire que entrer de la merde ?" << std::endl;
		}
	}
	return (0);
}
