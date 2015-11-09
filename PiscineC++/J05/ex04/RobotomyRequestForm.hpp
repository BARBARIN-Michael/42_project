/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 16:47:57 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/23 17:34:58 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef RobotomyRequestFORM_HPP
# define RobotomyRequestFORM_HPP

# include <Form.hpp>
# include <string>

class RobotomyRequestForm : public Form{

	private :
		RobotomyRequestForm(void);
		RobotomyRequestForm & operator=(RobotomyRequestForm const &rhs);
		RobotomyRequestForm(RobotomyRequestForm const &rhs);

	private :
		std::string _target;

	public :
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();
		void	action() const;
};

#endif
