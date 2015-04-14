/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folier <folier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 10:36:20 by folier            #+#    #+#             */
/*   Updated: 2015/01/07 10:36:22 by folier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void): _FPV(0), _rawBit(8){
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const & src): _rawBit(8){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed &		Fixed::operator=(Fixed const & rhs){
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs){
		this->setRawBits(rhs.getRawBits());
	}
	return *this;
}

int			Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_FPV;
}

void		Fixed::setRawBits(int raw){
	this->_FPV = raw;
	return;
}