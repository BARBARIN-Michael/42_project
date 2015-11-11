/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 18:12:55 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/24 18:13:05 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

class C
{
public:
	C();
	C(const C& src);
	~C();

	C& operator=(const C& rhs);

private:

};

#endif // C_HPP