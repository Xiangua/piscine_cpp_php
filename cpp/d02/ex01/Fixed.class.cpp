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

Fixed::Fixed(int const n): _rawBit(8){
//	0110 1111. 0000 0000
	this->_FPV = n << 8;
}

Fixed::Fixed(float const n): _rawBit(8){
// 42.78	
//0110 0011  0111 0110
	int tmp = n;//42 ~ 0110 0011 . 0000 0000
	float rest = n - tmp;//0.78 ~ 0000 0000 . 0111 0110
	int tmp2 = roundf(rest * 256);//~ 78 ~ 0111 0110 . 0000 0000
	//tmp << 8 =  0110 0011 0000 0000
	this->_FPV = (tmp << 8) + tmp2;

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

float		Fixed::toFloat(void) const{
	int tmp = this->_FPV >> 8;
	float tmp2 = this->_FPV & 255;
	float rest = tmp2 / 256;
	return tmp + rest;
}

int			Fixed::toInt(void) const{
	return this->_FPV >> 8;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs){
	o << rhs.toFloat();
	return o;
}