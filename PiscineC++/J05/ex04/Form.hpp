/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 22:31:22 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/23 23:28:24 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <stdexcept> 

class Bureaucrat;

class Form {

	private :
		const std::string	_name;
		const int			_grade;
		bool				_gradeSign;
		int					_gradeExec;

	public :
		class GradeTooLowException;
		class GradeTooHightException;
		Form(void);
		Form(std::string name, int grade, int gradeExec);
		Form(std::string name);
		Form(Form const &rhs);
		Form & operator=(Form const &rhs);
		virtual ~Form();
		std::string		getName() const;
		int				getGrade()const;
		bool			getSigned()const;
		void			beSigned(Bureaucrat const& b);
		void			exec(Bureaucrat const& b);

	protected :
		virtual void action() const = 0;
};

std::ostream& operator<<(std::ostream& ofs, Form const& form);

class Form::GradeTooLowException : public std::exception {

	private :

	int			_gradeVal;
	std::string	_name;

	private :
		GradeTooLowException & operator=(GradeTooLowException const &rhs) throw();

	public :
		GradeTooLowException(void) throw();
		GradeTooLowException(int gradeVal, std::string name) throw();
		GradeTooLowException(GradeTooLowException const& rhs) throw();
		virtual ~GradeTooLowException() throw();
		virtual const char	*what() const throw();
};


class Form::GradeTooHightException : public std::exception{

	private :

	int			_gradeVal;
	std::string	_name;

	private :
		GradeTooHightException & operator=(GradeTooHightException const &rhs) throw() ;

	public :
		GradeTooHightException(void) throw();
		GradeTooHightException(int gradeVal, std::string name) throw();
		GradeTooHightException(GradeTooHightException const &rhs) throw();
		virtual ~GradeTooHightException() throw();
		virtual const char	*what() const throw();
};


#endif
