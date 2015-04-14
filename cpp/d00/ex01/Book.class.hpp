/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Book.class.hpp 	                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folier <folier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 15:41:58 by folier            #+#    #+#             */
/*   Updated: 2015/01/06 08:24:41 by folier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOK_CLASS_HPP
# define BOOK_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Book {

public:
		Book(void);
		~Book(void);
		void			createAccount(void);
		void			showBook(void);
		void			showClient(void);
		static int		getprofCount(void);
		static int		selectIndex(void);

private:

		static int		_profCount;
		int				_index;
		std::string				_info[10];
};

# endif  //   PHONEBOOK_CLASS_HPP
