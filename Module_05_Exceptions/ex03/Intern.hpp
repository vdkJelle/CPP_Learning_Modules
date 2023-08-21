/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: jelvan-d <jelvan-d@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 14:23:56 by jelvan-d      #+#    #+#                 */
/*   Updated: 2020/09/23 15:54:44 by jelvan-d      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H
# include <iostream>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const& src);
		Intern&	operator=(Intern const& rhs);
		~Intern(void);
		AForm	*makeForm(std::string form, std::string target);
		AForm	*makePpf(std::string target);
		AForm	*makeRrf(std::string target);
		AForm	*makeScf(std::string target);

		class	InvalidForm : public std::exception
		{
			public:
				InvalidForm(void);
				InvalidForm(InvalidForm const& src);
				InvalidForm&	operator=(InvalidForm const& rhs);
				~InvalidForm(void) throw();
				const char	*what(void) const throw();
		};
	private:
};

#endif
