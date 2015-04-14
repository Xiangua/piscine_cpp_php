/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folier <folier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 15:41:46 by folier            #+#    #+#             */
/*   Updated: 2015/01/06 08:26:02 by folier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Book.class.hpp"

Book::Book(void) {
	return ;
}

Book::~Book(void) {
	return ;
}

int		Book::getprofCount(void) {
	return Book::_profCount;
}

int		Book::selectIndex(void) {
	std::string input;

	while (1){
		std::cout << "index? : ";
		std::getline(std::cin, input);
		if (input.size() == 1) {
			if (input[0] >= 48  && input[0] < Book::getprofCount() + 48){
				return ((int)input[0] - 48);
			}
			else {
				std::cout << "invalid index." << std::endl;
			}
		}
		else {
			std::cout << "invalid index." << std::endl;
		}	
	}
}

void	Book::showClient(void) {
	std::cout << "first name     : " << this->_info[0] << std::endl;
	std::cout << "last name      : " << this->_info[1] << std::endl;
	std::cout << "nick name      : " << this->_info[2] << std::endl;
	std::cout << "login          : " << this->_info[3] << std::endl;
	std::cout << "adress postal  : " << this->_info[4] << std::endl;
	std::cout << "adress mail    : " << this->_info[5] << std::endl;
	std::cout << "phone number   : " << this->_info[6] << std::endl;
	std::cout << "birthday date  : " << this->_info[7] << std::endl;
	std::cout << "favorite meal  : " << this->_info[8] << std::endl;
	std::cout << "darkest secret : " << this->_info[9] << std::endl;
}

void	Book::showBook(void) {
	std::cout << std::setw (10);
	std::cout << this->_index << "|";
	if (this->_info[0].length() <= 10){
		std::cout << std::setw (10);
		std::cout << this->_info[0] << "|"; 
	}
	else{
		std::cout << this->_info[0].substr(0,9) + ".|";
	}
	if (this->_info[1].length() <= 10){
		std::cout << std::setw (10);
		std::cout << this->_info[1] << "|"; 
	}
	else{
		std::cout << this->_info[1].substr(0,9) + ".|";
	}
	if (this->_info[2].length() <= 10){
		std::cout << std::setw (10);
		std::cout << this->_info[2] << "|" << std::endl; 
	}
	else{
		std::cout << this->_info[2].substr(0,9) + ".|" << std::endl;
	}
}

void	Book::createAccount(void){
	Book::_profCount += 1;
	if (Book::_profCount <= 8){
		this->_index = Book::getprofCount() - 1;
		std::cout << "your frist name ?" << std::endl;
		std::getline(std::cin, this->_info[0]);
		std::cout << "your lastName ?" << std::endl;
		std::getline(std::cin, this->_info[1]);
		std::cout << "your nick name?" << std::endl;
		std::getline(std::cin, this->_info[2]);
		std::cout << "your login?" << std::endl;
		std::getline(std::cin, this->_info[3]);
		std::cout << "your adress postal?" << std::endl;
		std::getline(std::cin, this->_info[4]);
		std::cout << "your adress mail?" << std::endl;
		std::getline(std::cin, this->_info[5]);
		std::cout << "your phone number?" << std::endl;
		std::getline(std::cin, this->_info[6]);
		std::cout << "your birthDay date?" << std::endl;
		std::getline(std::cin, this->_info[7]);
		std::cout << "your favorite meal?" << std::endl;
		std::getline(std::cin, this->_info[8]);
		std::cout << "your darkest secret?" << std::endl;
		std::getline(std::cin, this->_info[9]);
	}
	else {
		Book::_profCount -= 1;
		std::cout << "PhoneBook Full!" << std::endl;
	}
}

int		Book::_profCount = 0;
