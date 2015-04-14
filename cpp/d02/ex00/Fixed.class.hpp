/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folier <folier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/07 10:35:26 by folier            #+#    #+#             */
/*   Updated: 2015/01/07 10:35:30 by folier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed{
public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const & src);
	Fixed &		operator=(Fixed const & rhs);
	int			getRawBits(void) const;
	void		setRawBits(int);

private:
	int			_FPV;
	int	const	_rawBit;
};

#endif // ******** FIXED_CLASS_HPP