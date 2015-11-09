/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 15:26:46 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/22 22:00:46 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string.h>
# include <stdexcept>
# include <fstream>


class Bureaucrat {

	private :
		const std::string	_name;
		int					_grade;
		static const int	_hight;
		static const int	_low;

	public :
		class GradeTooLowException;
		class GradeTooHightException;
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &rhs);
		Bureaucrat & operator=(Bureaucrat const &rhs);
		virtual ~Bureaucrat();
		std::string	getName() const;
		int			getGrade() const;
		void		decGrade();
		void		incGrade();
};

std::ostream& operator<<(std::ostream& ofs, Bureaucrat const& rhs);
/* ****************************************************************************
 * GradeTooLowException class create
 * ***************************************************************************/
class Bureaucrat::GradeTooLowException : public std::exception {

	int		_gradeVal;
	public :
		GradeTooLowException(void) throw();
		GradeTooLowException(int gradeVal) throw();
		GradeTooLowException(GradeTooLowException const &rhs) throw();
		~GradeTooLowException(void) throw();
		virtual const char	*what() const throw();
	private :
		GradeTooLowException& operator=(Bureaucrat::GradeTooLowException const &rhs) throw();

};


/* ****************************************************************************
 * GradeTooLowException class create
 * ***************************************************************************/
class Bureaucrat::GradeTooHightException : public std::exception {

	int		_gradeVal;
	public :
		GradeTooHightException(void) throw();
		GradeTooHightException(int gradeVal) throw();
		GradeTooHightException(GradeTooHightException const &rhs) throw();
		~GradeTooHightException(void) throw();
		virtual const char	*what() const throw();
	private :
		GradeTooHightException& operator=(GradeTooHightException const &rhs) throw();

};

#endif
