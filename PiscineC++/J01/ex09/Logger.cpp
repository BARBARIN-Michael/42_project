/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 17:24:24 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/14 18:07:52 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <map>
#include <Logger.hpp>
#include <fstream>

void		Logger::logToFile(std::string str) {
	std::ofstream ofs("Log.txt", std::ofstream::out | std::ofstream::app);

	ofs << str << std::endl;
	ofs.close();
}

void		Logger::logToConsole(std::string str) {
	std::cerr << str << std::endl;
}

std::string Logger::makeLogEntry(std::string const& message) {
	std::string log;

	log = "< Log > " + message;
	return (log);
}

void		Logger::log(std::string const& dest, std::string const& message) {
	std::map<std::string, void (Logger::*)(std::string)> funct;
	std::string newLog = makeLogEntry(message);

	funct["Console"] = &Logger::logToConsole;
	funct["File"] = &Logger::logToFile;

	if (funct.count(dest) > 0)
		(this->*funct[dest])(newLog);
}

Logger::Logger() {

}

Logger::~Logger() {
}

