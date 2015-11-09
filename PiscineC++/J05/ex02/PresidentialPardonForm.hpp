/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 16:47:57 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/23 17:33:43 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PresidentialPardonFORM_HPP
# define PresidentialPardonFORM_HPP

# include <Form.hpp>
# include <string>

class PresidentialPardonForm : public Form{

	private :
		PresidentialPardonForm(void);
		PresidentialPardonForm & operator=(PresidentialPardonForm const &rhs);
		PresidentialPardonForm(PresidentialPardonForm const &rhs);

	private :
		std::string _target;

	public :
		PresidentialPardonForm(std::string target);
		virtual ~PresidentialPardonForm();
		void	action() const;
};

#endif
