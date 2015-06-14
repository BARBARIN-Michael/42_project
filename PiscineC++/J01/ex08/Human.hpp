/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 16:02:32 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/14 16:06:30 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

class Human {
	
	private :
		void meleeAttack(std::string const& target);
		void rangedAttack(std::string const& target);
		void intimidatingShout(std::string const& target);

	public :
		Human();
		~Human();
		void	action(std::string const& action_name, std::string const& target);
};

#endif
