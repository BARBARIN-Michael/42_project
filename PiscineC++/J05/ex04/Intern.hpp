/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 19:02:25 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/23 19:12:35 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INTERN_HPP
# define INTERN_HPP
# include <Form.hpp>

class Intern {

	private :

	public :
		Intern(void);
		Intern(Intern const &rhs);
		Intern & operator=(Intern const &rhs);
		Form *makeForm(std::string func, std::string name);
		virtual ~Intern();
};

#endif
