/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 18:37:51 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/14 22:13:18 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <fstream>

class Fixed {

	private :
		int			_fixe;
		const int	_fractional_bits;

	public :
		Fixed(void);
		Fixed(const int fixe);
		Fixed(const float fixe);
		Fixed(Fixed const &rhs);
		~Fixed();

		Fixed& operator=(Fixed const &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

		std::ostream& operator<<(std::ostream& ofs, Fixed const &rhs);

#endif
