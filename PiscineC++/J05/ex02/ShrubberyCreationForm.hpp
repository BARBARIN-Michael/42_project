/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 16:47:57 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/23 18:09:14 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <Form.hpp>
# include <string>

class ShrubberyCreationForm : public Form{

	private :
		ShrubberyCreationForm(void);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const &rhs);
		ShrubberyCreationForm(ShrubberyCreationForm const &rhs);

	private :
		std::string _target;

	public :
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();
		void	action() const;
};

#endif
