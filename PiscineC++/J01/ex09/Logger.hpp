/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 17:24:50 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/14 18:04:22 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef LOGGER_HPP
# define LOGGER_HPP

class Logger {
	
	private :
		std::string		makeLogEntry(std::string const& str);
		void			logToFile(std::string str);
		void			logToConsole(std::string str);

	public :
		void	log(std::string const& dest, std::string const& message);
		Logger();
		~Logger();
};

#endif
