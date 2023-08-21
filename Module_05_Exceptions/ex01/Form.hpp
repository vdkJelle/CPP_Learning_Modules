/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 14:27:35 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/21 19:36:50 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(std::string const name, int const toSign, int const toExecute);
		Form(Form const& src);
		Form&	operator=(Form const& rhs);
		~Form(void);
		std::string			getName(void) const;
		bool				getSigned(void) const;
		int					getToSign(void) const;
		int					getToExecute(void) const;
		void				beSigned(Bureaucrat& src);

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
		std::string const	_name;
		bool				_signed;
		int	const			_toSign;
		int	const			_toExecute;
};

std::ostream&	operator<<(std::ostream& o, Form const& rhs);

#endif
