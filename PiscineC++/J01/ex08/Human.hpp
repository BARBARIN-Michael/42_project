/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 16:02:32 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/16 11:32:32 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

class Human {
	
	private :
		std::string _name;
		void meleeAttack(std::string const& target);
		void rangedAttack(std::string const& target);
		void intimidatingShout(std::string const& target);

	public :
		Human(std::string name);
		void	action(std::string const& action_name, std::string const& target);
		static size_t	hashFunction(std::string const& action_name);
};

#endif
