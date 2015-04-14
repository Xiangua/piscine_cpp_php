/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folier <folier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 10:35:26 by folier            #+#    #+#             */
/*   Updated: 2015/01/08 07:04:01 by folier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <cmath>
#include <iostream>

class Fixed{
public:
	Fixed(void);
	Fixed(Fixed const & src);
	Fixed(int const);
	Fixed(float const);
	~Fixed(void);

	Fixed &		operator=(Fixed const & rhs);
	Fixed 		operator+(Fixed const & rhs) const;
	Fixed       operator-(Fixed const & rhs) const;
	Fixed       operator/(Fixed const & rhs) const;
	Fixed 		operator*(Fixed const & rhs) const;
	Fixed &		operator++();
	Fixed 		operator++(int);
	Fixed & 	operator--();
	Fixed       operator--(int);
	bool		operator==(Fixed const & rhs) const;
	bool		operator!=(Fixed const & rhs) const;
	bool		operator<(Fixed const & rhs) const;
	bool 		operator>(Fixed const & rhs) const;
	bool		operator<=(Fixed const & rhs) const;
	bool		operator>=(Fixed const & rhs) const;
	int			getRawBits(void) const;
	void		setRawBits(int);
	float		toFloat(void) const;
	int			toInt(void) const;
	static Fixed 	min(Fixed const & rhs1, Fixed const & rhs2);
	static Fixed 	max(Fixed const & rhs1, Fixed const & rhs2);
private:

	int			_FPV;
	int	const	_rawBit;
};


std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif // ******** FIXED_CLASS_HPP
