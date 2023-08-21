/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/11 13:55:18 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/21 19:39:52 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const& src);
		Bureaucrat&	operator=(Bureaucrat const& rhs);
		~Bureaucrat(void);
		std::string		getName(void) const;
		int				getGrade(void) const;
		void			increaseGrade(void);
		void			decreaseGrade(void);
		
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(GradeTooHighException const& src);
				GradeTooHighException&	operator=(GradeTooHighException const& rhs);
				~GradeTooHighException(void) throw();
				const char	*what(void) const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(GradeTooLowException const& src);
				GradeTooLowException&	operator=(GradeTooLowException const& rhs);
				~GradeTooLowException(void) throw();
				const char	*what(void) const throw();
		};
	private:
		Bureaucrat(void);
		std::string	const	_name;
		int					_grade;
};

std::ostream&	operator<<(std::ostream& o, Bureaucrat const& rhs);

#endif
