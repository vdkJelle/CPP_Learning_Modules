/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 20:05:34 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/23 13:53:51 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(void);
		AForm(std::string const name, std::string const target, int const toSign, int const toExecute);
		AForm(AForm const& src);
		AForm&	operator=(AForm const& rhs);
		virtual ~AForm(void);
		std::string			getName(void) const;
		std::string			getTarget(void) const;
		bool				getSigned(void) const;
		int					getToSign(void) const;
		int					getToExecute(void) const;
		void				setSigned(bool isSigned);
		void				beSigned(Bureaucrat& src);
		virtual	void		execute(Bureaucrat const& executor) const = 0;

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
		class FormAlreadySigned : public std::exception
		{
			public:
				FormAlreadySigned(void);
				FormAlreadySigned(FormAlreadySigned const& src);
				FormAlreadySigned&	operator=(FormAlreadySigned const& rhs);
				~FormAlreadySigned(void) throw();
				const char	*what(void) const throw();
		};
		class CantExecuteForm : public std::exception
		{
			public:
				CantExecuteForm(void);
				CantExecuteForm(CantExecuteForm const& src);
				CantExecuteForm&	operator=(CantExecuteForm const& rhs);
				~CantExecuteForm(void) throw();
				const char	*what(void) const throw();
		};
	private:
		std::string const	_name;
		std::string const	_target;
		bool				_signed;
		int	const			_toSign;
		int	const			_toExecute;
};

std::ostream&	operator<<(std::ostream& o, AForm const& rhs);

#endif
