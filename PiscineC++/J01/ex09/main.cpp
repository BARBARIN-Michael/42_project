/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 17:25:00 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/14 18:11:30 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Logger.hpp>

int		main(void)
{
	Logger logger;

	logger.log("Console", "petit test de message d'erreur sur console");
	logger.log("File", "petit test de message d'erreur sur ficher");
	
	return (0);
}
